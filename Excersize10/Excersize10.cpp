#include <fstream>
#include <iostream>
#include <string>
using namespace std;
#include <vector>
#include <numeric>
#include <sstream>
#include <algorithm>

struct movie {
    int year;
    int length;
    string title;
    string subject;
    string actor;
    string actress;
    string director;
    int popularity;
    bool award;
    string image;
};


int main() {
    ifstream file("input.csv");
    string line;
    vector<movie> movies;
    int count =0;
    while (getline(file, line)) {
        stringstream ss(line);
        string token;
        movie m;
        while(getline(ss, token, ';')){
            if(count == 0){
                if(token=="" || token==" "){
                    m.year = 0;
                }
                else{
                    m.year = stoi(token);
                }
            }
            else if(count == 1){
                if(token=="" || token==" "){
                    m.length = 0;
                }
                else{
                    m.length = stoi(token);
                }
            }
            else if(count == 2){
                m.title = token;
            }
            else if(count == 3){
                m.subject = token;
            }
            else if(count == 4){
                m.actor = token;
            }
            else if(count == 5){
                m.actress = token;
            }
            else if(count == 6){
                m.director = token;
            }
            else if(count == 7){
                if(token=="" || token==" "){
                    m.popularity = 0;
                }
                else{
                    m.popularity = stoi(token);
                }
            }
            else if(count == 8){
                if(token == "Yes"){
                    m.award = true;
                }
                else{
                    m.award = false;
                }
            }
            else if(count == 9){
                m.image = token;
                count =0;
                break;
            }
            count++;
        }
        movies.push_back(m);
    }

    //Use accumulate to sum the total length of all movies
    int totalLength = accumulate(movies.begin(), movies.end(), 0, [](int sum, movie m){return sum + m.length;});
    auto it = find_if(movies.begin(), movies.end(), [](movie m){return m.year == 1990;});
    cout << "First occurance of a movie made in 1990 before sorting: " << it->title << endl;
    //Use sort to rank movies in descending order by popularity
    sort(movies.begin(), movies.end(), [](movie m1, movie m2){return m1.popularity > m2.popularity;});
    cout<<"The most popular movie is: " << movies[0].title <<". With a popularity rating of: "<< movies[0].popularity <<endl;
    //Use find to find the first occurance of a movie made in 1990
    auto it2 = find_if(movies.begin(), movies.end(), [](movie m){return m.year == 1990;});
    cout << "Total length of all movies: " << totalLength << endl;
    cout << "First occurance of a movie made in 1990 after sorting: " << it2->title << endl;

    //create a vector of movies that have the subject "Comedy"
    vector<movie> comedyMovies;
    copy_if(movies.begin(), movies.end(), back_inserter(comedyMovies), [](movie m){return m.subject == "Comedy";});
    //create a vector of movies that have the subject "Action"
    vector<movie> actionMovies;
    copy_if(movies.begin(), movies.end(), back_inserter(actionMovies), [](movie m){return m.subject == "Action";});
    //use unique to create a list of Comedy movies with unique years the movie were released
    vector<int> uniqueComedyYears;
    for(auto m : comedyMovies){
        uniqueComedyYears.push_back(m.year);
    }
    sort(uniqueComedyYears.begin(), uniqueComedyYears.end());
    auto last = unique(uniqueComedyYears.begin(), uniqueComedyYears.end());
    uniqueComedyYears.erase(last, uniqueComedyYears.end());
    //print out the list of Comedy movies with unique years the movie were released
    cout << "Comedy movies with unique years the movie were released: " << endl;
    for(auto i : uniqueComedyYears){
        cout << i << endl;
    }

    //use unique to create a list of Action movies with unique years the movie were released
    vector<int> uniqueActionYears;
    for(auto m : actionMovies){
        uniqueActionYears.push_back(m.year);
    }
    sort(uniqueActionYears.begin(), uniqueActionYears.end());
    auto last2 = unique(uniqueActionYears.begin(), uniqueActionYears.end());
    uniqueActionYears.erase(last2, uniqueActionYears.end());
    //print out the list of Action movies with unique years the movie were released
    cout << "Action movies with unique years the movie were released: " << endl;
    for(auto i : uniqueActionYears){
        cout << i << endl;
    }
    //Use unique to compare the two lists and print out the years that don't match
    vector<int> uniqueYears;
    for(auto i : uniqueComedyYears){
        uniqueYears.push_back(i);
    }
    for(auto i : uniqueActionYears){
        uniqueYears.push_back(i);
    }
    sort(uniqueYears.begin(), uniqueYears.end());
    auto last3 = unique(uniqueYears.begin(), uniqueYears.end());
    uniqueYears.erase(last3, uniqueYears.end());
    cout << "Years that don't match: " << endl;
    for(auto i : uniqueYears){
        cout << i << endl;
    }


    return 0;

}

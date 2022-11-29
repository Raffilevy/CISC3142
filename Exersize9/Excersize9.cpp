
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
double averageTemp(vector<vector<string>> data){
    
    double sum = 0;
    double average = 0;
    for(int i = 0; i < data.size(); i++){
        sum += stod(data[i][1]);
    }
    average = sum / (data.size());
    return average;
}

double averageTempPriorThreeMonths(vector<vector<string>> data, string month, ofstream& output){
    double sum = 0;
    double average = 0;
    int monthIndex = 0;
    for(int i = 0; i < data.size(); i++){
        if(data[i][0] == month){
            monthIndex = i;
        }
    }
    if(monthIndex < 2){
        output << "Cannot calculate average temperature for the three months prior to " << month<<" ";
    }
    else{
        for(int i = monthIndex - 2; i <= monthIndex; i++){
            sum += stod(data[i][1]);
        }
        average = sum / 3;
    }
    return average;
}

double weightedAverageTemp(string month, vector<vector<string>> data, ofstream& output){
    double sum = 0;
    double average = 0;
    int monthIndex = 0;
    int count =0;
    for(int i = 0; i < data.size(); i++){
        if(data[i][0] == month){
            monthIndex = i;
        }
    }
    if(monthIndex < 2){
        output << "Cannot calculate weighted average temperature for the three months prior to " << month<<" ";
    }
    else{
        for(int i = monthIndex - 2; i <= monthIndex; i++){
            if(count==1){
                sum += 2*stod(data[i][1]);
            } else if (count==2){
                sum += 3*stod(data[i][1]);
            } 
            else
                sum += stod(data[i][1]);
            count++;
        }
        average = sum / 6;
    }
    return average;
}



int main(){
    
    fstream file("input.csv");
    vector<vector<string>> data;
    string line, word;
    while(getline(file, line)){
        vector<string> row;
        stringstream s(line);
        while(getline(s, word, ',')){
            row.push_back(word);
        }
        data.push_back(row);
    }
    
    ofstream output;
    output.open("output.txt");
    output << "Average temperature across all months: " << averageTemp(data) << endl;


    output << "Moving average temperature for all months: "<< endl;
    for(int i = 0; i < data.size(); i++){
        output << data[i][0] << ": " << averageTempPriorThreeMonths(data, data[i][0], output) << endl;
    }

    output << "Weighted average temperature for all months: "<< endl;
    for(int i = 0; i < data.size(); i++){
        output << data[i][0] << ": " << weightedAverageTemp(data[i][0], data, output) << endl;
    }
    return 0;
}


#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

int main(){

    ifstream input("input.txt");
    float x;
    float y;
    float avgX =0;
    float avgY=0;
    float sumX=0;
    float sumY=0;
    vector<float> allX;
    vector<float> allY;
    int count =0;
    while(input.peek()!=EOF){
        input >>y >> x;
        allX.push_back(x);
        allY.push_back(y);
        avgX +=x;
        avgY+=y;
        count++;
    }
    avgX /= count;
    avgY /= count;
    for(int i=0;i<allX.size();i++){
        sumX += ((allX[i]-avgX)*(allX[i]-avgX));
        sumY += ((allX[i]-avgX)*(allY[i]-avgY));

    }
    float b1 = sumY / sumX;
    float b0 = avgY - (b1*avgX);
    cout << b0 <<" + "<<b1<<"x";
    return 0;

}
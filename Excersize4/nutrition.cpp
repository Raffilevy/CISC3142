#include <iostream>
using namespace std;

int main(){
	
	//creating the percentag of sweetner needed to kill
        double deadly = 5;
        deadly/=35;
        int gramPerPound = 45400/100;
	
	//result of 350/10/100
        const double sweetPerPop = .35;
        double weight;
        double result;
        cout<<"Please enter a weight (enter ctrl-d to exit)"<<endl;
        while(cin>>weight){
                result = (weight*deadly)/sweetPerPop;
                cout<<"The total safe amount is: "<<result<<endl;
                cout<<"Please enter a weight (enter ctrl-d to exit)"<<endl;
                }
        return 0;
}

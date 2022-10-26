#include <iostream>  
using namespace std;  

int main(){  
	/* input is the given number
	the sum is the running sum of ach digit
	each digit is extracted by modulising it continuously by 10
	(the modulous of anything divided by 10 is the last digit of that number)*/
	int input,sum=0,run;    
	cout<<"Enter a positive number: ";    
	cin>>input;
	int original = input;
	//we add the run the the running sum, divide by 10 to get next digit     
	while(input>0){    
		run=input%10;    
		sum=sum+run;    
		input/=10;    
	}    
	cout<<"Sum of digits of the number "<<original<<" is: "<<sum<<endl;    
	return 0;  
}  

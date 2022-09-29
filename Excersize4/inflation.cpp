#include <iostream>
using namespace std;
int main(){
	double cost;
	double rate;
	int years;
	
	cout<<"Please enter the cost of the item"<<endl;
	cin>>cost;
		
	cout<<"Please enter how many years will pass"<<endl;
	cin>>years;
	
	cout<<"Please enter rate of inflation in percentage form"<<endl;
	cin>>rate;
	
	//converting it from percentage to decimal
	rate /= 100;
	//adding 1 so that we can multiply it and include previous value
	rate +=1;
		
	//this will multiply the running cost by the rate and 
	for(int i=years;i>0;--i)
		cost*=rate;
	cout<<cost;
	return 0;
}
	

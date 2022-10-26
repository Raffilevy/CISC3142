#include <iostream>
using namespace std;

int main() {

	bool prime = true;
	
	//looping from 3 to 100
	for(int i=3;i<=100;i++){
		/*we will check if it is divisable by any number other than 1 and itself
		we only need to loop through half the numbers becuase its not possible to be divied by a number more than half the value
		if we find a number we break out and print it, then go to the next*/		
		for(int j=2;j<=i/2;j++){
			if((i % j) ==0){
				prime=false;
				break;
			}
		}
		if(prime)
			cout<<i<<" "<<endl;
		prime=true;
	}
	return 0;
}

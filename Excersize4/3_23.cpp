#include <iostream>
#include <vector>
using namespace std;

int main(){
	//initializing a vector with a size of 10
	vector<int>nums(10);
	
	//reading each number into the vector and doubling it
	for(int i=0;i<10;++i){
		cin>>nums[i];
		nums[i] *= 2;
	}
	
	//print each multiplied number	
	for(int i: nums)
		cout<<i<<" ";
	return 0;
}

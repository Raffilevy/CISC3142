#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

	//vector to store the inputted words
	vector<string> words;
	//temp string to hold each instance to be added
	string s;
	/*while there are more words to be inputted
	user will enter ctrl-d to signify EOF
	push_back() adds element to end of vector*/
	while(cin >> s)
		words.push_back(s);
	
	/*this nested for-each loop goes through each word in the vector
	and then each char from each word.
	It will capitalize each char*/ 
	for(string &i:words)
		for(char &c: i)
			c = toupper(c);
	//this for loop prints each word in the vector
	for(int i=0;i<words.size();++i){
		cout << words[i]<<'\t';
		//after every 8th word we insert a new line
		if((i+1)%8==0)
			cout<<endl;
		}
	return 0;
}

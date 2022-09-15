#include <iostream>

using namespace std;
int main(){
  int first, second;
  cin >> first;
  cin >> second;
  if(first> second){
    while(second<first){
      cout << second;
      ++second;
    }
  } else {
    while(first < second){
      cout << first;
      ++first;
    }
  } return 0;
}

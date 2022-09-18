#include <iostream>

using namespace std;
int main(){
  int first, second;
  cin >> first;
  cin >> second;
  if(first> second){
    for(int i = second;i<first;++i){
      cout << i;
    }
  } else {
    for(int j=first;j < second;++j){
      cout << first;
    }
  } return 0;
}


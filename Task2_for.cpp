#include <iostream>

using namespace std;
int main(){
  int first, second;
  cin >> first;
  cin >> second;
  if(first> second){
    for(int i = second;second<first;++second){
      cout << i;
    }
  } else {
    for(int j=first;first < second;++first){
      cout << first;
    }
  } return 0;
}

#include <iostream>
using namespace std;

int main() {
  // using sizeof() we can just plug in the type and it will return the
  // default size
  cout << "char\t" << sizeof(char) << endl;
  cout << "wchar_t\t" << sizeof(wchar_t) << endl;
  cout << "char16_t\t" << sizeof(char16_t) << endl;
  cout << "char32_t\t" << sizeof(char32_t) << endl;
  cout << "short\t" << sizeof(short) << endl;
  cout << "int\t" << sizeof(int) << endl;
  cout << "long\t" << sizeof(long) << endl;
  cout << "long long\t" << sizeof(long long) << endl;
  cout << "float\t" << sizeof(float) << endl;
  cout << "double\t" << sizeof(double) << endl;
  cout << "long double\t" << sizeof(long double) << endl;

  return 0;
}

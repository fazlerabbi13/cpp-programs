#include <iostream>
#include <cstring>
using namespace std;

int main() {
  char myStr[20] = "Hello";
  strcat(myStr, " World!");
  cout << myStr;
  return 0;
}

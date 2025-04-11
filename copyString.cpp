#include <iostream>
#include <cstring>
using namespace std;

int main() {
  char str1[] = "Hello World!";
  char str2[30];
  strcpy(str2, str1);
  cout << str1 << "\n";
  cout << str2 << "\n";
  return 0;
}
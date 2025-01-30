#include <iostream>
#include <string>
using namespace std;

void modifyStr(string &str) {
  str += " World!";
}

int main() {
  string greeting = "Hello";
  modifyStr(greeting);
  cout << greeting;
  return 0;
}
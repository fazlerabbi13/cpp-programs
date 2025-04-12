#include <iostream>
#include <string>
using namespace std;
 
int main () {
  string txt1 = "Hello World!";
  string txt2 = "";
  cout << txt1.empty() << "\n";
  cout << txt2.empty();
  return 0;
}
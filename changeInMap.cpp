#include <iostream>
#include <map>
using namespace std;

int main() {
  map<string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

  // Change John's value to 50 instead of 32
  people["John"] = 50;
  
  cout << "John is: " << people["John"];
  
  return 0;
}

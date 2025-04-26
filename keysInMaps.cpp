#include <iostream>
#include <map>
using namespace std;

int main() {
  map<string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

  // Trying to add two elements with equal keys
  people.insert({"Jenny", 22});
  people.insert({"Jenny", 30});
  
  cout << "Jenny is: " << people.at("Jenny") << "\n";
  
  return 0;
}
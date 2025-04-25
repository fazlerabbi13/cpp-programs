#include <iostream>
#include <map>
using namespace std;

int main() {
  map<string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

  // Add new elements
  people.insert({"Jenny",  22});
  people.insert({"Liam", 24});
  people.insert({"Kasper", 20});
  people.insert({"Anja", 30});
  
  cout << "Jenny is: " << people.at("Jenny") << "\n";
  cout << "Liam is: " << people.at("Liam") << "\n";
  
  return 0;
}

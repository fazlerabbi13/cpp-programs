#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
  vector<string>::reverse_iterator it;
  for (it = cars.rbegin(); it != cars.rend(); ++it) {
    cout << *it << "\n";
  }
  return 0;
}

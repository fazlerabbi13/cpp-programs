#include <iostream>
#include <deque>
using namespace std;

int main() {
  // Create a deque called cars that will store strings
  deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

  // Get the first element
  cout << cars.front() << "\n";  // Outputs Volvo

  // Get the last element
  cout << cars.back() << "\n";  // Outputs BMW
  return 0;
}

#include <iostream>
#include <deque>
using namespace std;

int main() {
  deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

  // Change the value of the first element
  cars[0] = "Opel";

  cout << cars[0];
  return 0;
}
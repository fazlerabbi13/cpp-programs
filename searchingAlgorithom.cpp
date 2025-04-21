#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  // Create a vector called numbers that will store integers
  vector<int> numbers = {1, 7, 3, 5, 9, 2};

  // Search for the number 3
  auto it = find(numbers.begin(), numbers.end(), 3);

  // Check if the number 3 was found
  if (it != numbers.end()) {
    cout << "The number 3 was found!" << "\n";
  } else {
    cout << "The number 3 was not found." << "\n";
  }
  
  return 0;
}

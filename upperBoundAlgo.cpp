#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  // Create a vector called numbers that will store integers
  vector<int> numbers = {1, 7, 3, 5, 9, 2};

  // Sort the vector in ascending order
  sort(numbers.begin(), numbers.end());
  
  // Find the first value greater than 5 in the sorted vector
  auto it = upper_bound(numbers.begin(), numbers.end(), 5);
  
  cout << *it;
  
  return 0;
}
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    
    // Ensure x is the smaller number
    if (x > y) {
        swap(x, y);
    }
    
    bool found = false;
    
    for (int i = x + 1; i < y; i++) {
        if (i % 5 == 2 || i % 5 == 3) {
            cout << i << endl;
            found = true;
        }
    }
    
    // If no numbers were found, the problem doesn't require any special output
    return 0;
}
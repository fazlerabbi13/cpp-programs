#include <iostream>

using namespace std;

int main() {
    int X;
    cin >> X;
    
    // Find the first odd number
    if (X % 2 == 0) {
        X += 1;
    }
    
    // Print 6 consecutive odd numbers
    for (int i = 0; i < 6; ++i) {
        cout << X + 2 * i << endl;
    }
    
    return 0;
}
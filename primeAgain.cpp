#include <iostream>
using namespace std;

// Simple primality check
bool isPrime(unsigned int n) {
    if (n < 2) return false;
    for (unsigned int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        unsigned int N;
        cin >> N;
        
        // Find the nearest smaller prime
        for (unsigned int i = N - 1; i >= 2; --i) {
            if (isPrime(i)) {
                cout << i << endl;
                break;
            }
        }
    }

    return 0;
}

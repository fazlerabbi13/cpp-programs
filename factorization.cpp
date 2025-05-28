#include <iostream>
#include <vector>

using namespace std;

// Function to generate prime factors
vector<int> primeFactorization(int n) {
    vector<int> factors;
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1) {
        factors.push_back(n); // n is prime
    }
    return factors;
}

int main() {
    int n;
    while (cin >> n) {
        cout << "1";
        vector<int> factors = primeFactorization(n);
        for (int factor : factors) {
            cout << " x " << factor;
        }
        cout << endl;
    }
    return 0;
}

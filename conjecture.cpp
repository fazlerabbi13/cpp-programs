#include <iostream>
#include <vector>
using namespace std;

const int MAX = 1000000;
vector<bool> is_prime(MAX, true);

// Sieve of Eratosthenes to precompute prime numbers up to MAX
void sieve() {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i < MAX; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j < MAX; j += i)
                is_prime[j] = false;
        }
    }
}

int main() {
    sieve();
    int n;
    while (cin >> n && n != 0) {
        bool found = false;
        for (int i = 2; i <= n / 2; ++i) {
            if (is_prime[i] && is_prime[n - i]) {
                cout << n << " = " << i << " + " << (n - i) << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Goldbach's conjecture is wrong." << endl;
        }
    }
    return 0;
}

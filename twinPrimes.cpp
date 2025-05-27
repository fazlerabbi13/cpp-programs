#include <iostream>
#include <vector>
using namespace std;

const int LIMIT = 20000000;

int main() {
    vector<bool> is_prime(LIMIT + 1, true);
    vector<pair<int, int>> twins;

    // Sieve of Eratosthenes
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= LIMIT; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= LIMIT; j += i)
                is_prime[j] = false;
        }
    }

    // Store twin primes
    for (int i = 3; i + 2 <= LIMIT; ++i) {
        if (is_prime[i] && is_prime[i + 2])
            twins.push_back({i, i + 2});
    }

    // Read input and print output
    int s;
    while (cin >> s) {
        cout << "(" << twins[s - 1].first << ", " << twins[s - 1].second << ")\n";
    }

    return 0;
}

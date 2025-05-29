#include <iostream>
#include <vector>
using namespace std;

const int MAX = 100000;

int main() {
    // Step 1: Sieve of Eratosthenes
    vector<bool> isPrime(MAX + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= MAX; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                isPrime[j] = false;
            }
        }
    }

    // Step 2: Create a prefix sum of prime counts
    vector<int> primeCount(MAX + 1, 0);
    for (int i = 1; i <= MAX; i++) {
        primeCount[i] = primeCount[i - 1] + (isPrime[i] ? 1 : 0);
    }

    // Step 3: Process input ranges
    int A, B;
    while (cin >> A >> B) {
        if (A == -1 && B == -1) break;

        if (A > B) swap(A, B);
        int result = primeCount[B] - (A > 0 ? primeCount[A - 1] : 0);
        cout << result << endl;
    }

    return 0;
}

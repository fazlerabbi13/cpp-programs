#include <iostream>
#include <vector>

using namespace std;

// Generate all primes up to 10000 using Sieve of Eratosthenes
vector<int> generate_primes(int limit) {
    vector<bool> is_prime(limit + 1, true);
    vector<int> primes;

    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= limit; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (int j = i * 2; j <= limit; j += i)
                is_prime[j] = false;
        }
    }

    return primes;
}

// Count ways to write n as sum of consecutive primes
int count_consecutive_prime_sums(int n, const vector<int>& primes) {
    int count = 0;

    for (int start = 0; start < primes.size(); ++start) {
        int sum = 0;
        for (int end = start; end < primes.size(); ++end) {
            sum += primes[end];
            if (sum == n) {
                ++count;
                break;
            } else if (sum > n) {
                break;
            }
        }
    }

    return count;
}

int main() {
    vector<int> inputs;
    int num;
    while (cin >> num && num != 0) {
        inputs.push_back(num);
    }

    vector<int> primes = generate_primes(10000);

    for (int n : inputs) {
        cout << count_consecutive_prime_sums(n, primes) << endl;
    }

    return 0;
}

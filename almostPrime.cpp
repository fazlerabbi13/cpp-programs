#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> prime_factors_count(n + 1, 0);

    for (int i = 2; i <= n; i++) {
        if (prime_factors_count[i] == 0) {
            // i is a prime number
            for (int j = i; j <= n; j += i) {
                prime_factors_count[j]++;
            }
        }
    }

    int almost_prime_count = 0;
    for (int i = 1; i <= n; i++) {
        if (prime_factors_count[i] == 2) {
            almost_prime_count++;
        }
    }

    cout << almost_prime_count << endl;

    return 0;
}

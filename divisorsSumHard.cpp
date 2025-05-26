#include <iostream>
#include <cmath>
using namespace std;

typedef long long ll;

ll properDivisorSum(ll n) {
    if (n == 1) return 0;  // 1 has no proper divisors

    ll sum = 1; // 1 is a proper divisor of every number > 1
    ll root = sqrt(n);

    for (ll i = 2; i <= root; ++i) {
        if (n % i == 0) {
            sum += i;
            ll other = n / i;
            if (other != i && other != n)
                sum += other;
        }
    }

    return sum;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        cout << properDivisorSum(n) << '\n';
    }

    return 0;
}

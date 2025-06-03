#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll MOD = 1e9 + 7;

// Function to calculate (base^exp) % mod
ll power(ll base, ll exp, ll mod) {
    ll result = 1;
    while (exp > 0) {
        if (exp % 2) result = result * base % mod;
        base = base * base % mod;
        exp /= 2;
    }
    return result;
}

// Function to calculate modular inverse using Fermat's Little Theorem
ll mod_inverse(ll a) {
    return power(a, MOD - 2, MOD);
}

// Function to calculate geometric series: 1 + a + a^2 + ... + a^k
ll geometric_sum(ll a, ll k) {
    if (a == 1) return (k + 1) % MOD;
    ll numerator = (power(a, k + 1, MOD) - 1 + MOD) % MOD;
    ll denominator = mod_inverse(a - 1);
    return numerator * denominator % MOD;
}

int main() {
    int n;
    cin >> n;

    vector<pair<ll, ll>> factors(n);
    for (int i = 0; i < n; ++i) {
        cin >> factors[i].first >> factors[i].second;
    }

    ll num_divisors = 1;
    ll sum_divisors = 1;
    ll exp_product = 1;

    // Calculate number of divisors and prepare for product
    for (auto &[p, k] : factors) {
        num_divisors = num_divisors * (k + 1) % MOD;
    }

    // Calculate sum of divisors
    for (auto &[p, k] : factors) {
        sum_divisors = sum_divisors * geometric_sum(p, k) % MOD;
    }

    // Calculate product of divisors
    // Use MOD - 1 because of Fermat's theorem (modulo exponent)
    ll exponent_mod = 1;
    for (auto &[p, k] : factors) {
        exponent_mod = exponent_mod * (k + 1) % (MOD - 1);
    }

    ll product_divisors = 1;
    for (auto &[p, k] : factors) {
        ll total_exponent = k * exponent_mod / 2 % (MOD - 1);
        product_divisors = product_divisors * power(p, total_exponent, MOD) % MOD;
    }

    cout << num_divisors << " " << sum_divisors << " " << product_divisors << "\n";
    return 0;
}

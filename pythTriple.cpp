#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n < 3) {
        cout << -1 << endl;
        return 0;
    }

    long long m, k;

    if (n % 2 == 0) {
        // n is even
        long long x = n / 2;
        m = x * x - 1;
        k = x * x + 1;
    } else {
        // n is odd
        m = (n * n - 1) / 2;
        k = (n * n + 1) / 2;
    }

    cout << m << " " << k << endl;

    return 0;
}

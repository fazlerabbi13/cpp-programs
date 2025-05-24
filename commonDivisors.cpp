#include <iostream>
#include <cmath>
using namespace std;

// Function to compute GCD
int gcd(int a, int b) {
    while (b != 0) {
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

// Function to count the number of divisors of a number
int countDivisors(int n) {
    int count = 0;
    for (int i = 1; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            count += 2; // i and n/i are both divisors
            if (i == n / i) count--; // if both divisors are same, count only once
        }
    }
    return count;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, B;
        cin >> A >> B;
        int g = gcd(A, B);
        cout << countDivisors(g) << endl;
    }

    return 0;
}

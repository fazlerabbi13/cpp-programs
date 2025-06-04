#include <iostream>
#include <vector>
using namespace std;

// Function to calculate the sum of proper divisors of n
int aliquotSum(int n) {
    if (n == 1) return 0;
    int sum = 1;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) {
                sum += n / i;
            }
        }
    }
    return sum;
}

int main() {
    int T;
    cin >> T;
    vector<int> numbers(T);
    
    for (int i = 0; i < T; ++i) {
        cin >> numbers[i];
    }

    for (int i = 0; i < T; ++i) {
        int n = numbers[i];
        int s = aliquotSum(n);

        if (s > n)
            cout << "abundant" << endl;
        else if (s < n)
            cout << "deficient" << endl;
        else
            cout << "perfect" << endl;
    }

    return 0;
}

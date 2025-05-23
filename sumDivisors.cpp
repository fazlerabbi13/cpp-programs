#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int MAX = 500001;
    vector<int> sumDiv(MAX, 0);

    // Precompute proper divisors sum
    for (int i = 1; i < MAX; i++) {
        for (int j = i * 2; j < MAX; j += i) {
            sumDiv[j] += i;
        }
    }

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << sumDiv[n] << '\n';
    }

    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int MAX = 1e6 + 1;
    vector<int> divisors(MAX, 0);

    // Precompute number of divisors
    for (int i = 1; i < MAX; i++)
        for (int j = i; j < MAX; j += i)
            divisors[j]++;

    int n, x;
    cin >> n;
    while (n--) {
        cin >> x;
        cout << divisors[x] << '\n';
    }

    return 0;
}

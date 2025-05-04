#include <iostream>
using namespace std;

int main() {
    long long a, b, x;
    cin >> a >> b >> x;

    long long count = (b / x) - ((a - 1) / x);

    cout << count << endl;
    return 0;
}

#include <iostream>
#include <algorithm> // For std::min and std::max

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    int start = min(x, y);
    int end = max(x, y);

    int total = 0;

    for (int num = start; num <= end; ++num) {
        if (num % 13 != 0) {
            total += num;
        }
    }

    cout << total << endl;

    return 0;
}
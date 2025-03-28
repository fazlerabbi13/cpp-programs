
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int count = 0;
        for (int i = 0; i < n; ++i) {
            int p;
            cin >> p;
            if (p > 0) {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}

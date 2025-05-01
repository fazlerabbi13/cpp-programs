#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int smallest, middle, largest;

        // Compare a, b, c using conditions
        if (a <= b && a <= c) {
            smallest = a;
            if (b <= c) {
                middle = b;
                largest = c;
            } else {
                middle = c;
                largest = b;
            }
        } else if (b <= a && b <= c) {
            smallest = b;
            if (a <= c) {
                middle = a;
                largest = c;
            } else {
                middle = c;
                largest = a;
            }
        } else {
            smallest = c;
            if (a <= b) {
                middle = a;
                largest = b;
            } else {
                middle = b;
                largest = a;
            }
        }

        cout << smallest << " " << middle << " " << largest << endl;
    }

    return 0;
}

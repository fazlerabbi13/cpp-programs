#include <iostream>
using namespace std;

int main() {
    double number;
    int positiveCount = 0;

    for (int i = 0; i < 6; ++i) {
        cin >> number;
        if (number > 0) {
            positiveCount++;
        }
    }

    cout << positiveCount << " valores positivos" << endl;

    return 0;
}

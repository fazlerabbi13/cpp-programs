#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    for (int i = 0; i < N; ++i) {
        int X, Y;
        cin >> X >> Y;
        
        if (Y == 0) {
            cout << "divisao impossivel" << endl;
        } else {
            double result = static_cast<double>(X) / Y;
            cout << fixed << setprecision(1) << result << endl;
        }
    }
    
    return 0;
}
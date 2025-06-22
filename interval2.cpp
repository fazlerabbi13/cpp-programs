#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int in_count = 0;
    int out_count = 0;
    
    for (int i = 0; i < N; ++i) {
        int X;
        cin >> X;
        if (X >= 10 && X <= 20) {
            in_count++;
        } else {
            out_count++;
        }
    }
    
    cout << in_count << " in" << endl;
    cout << out_count << " out" << endl;
    
    return 0;
}
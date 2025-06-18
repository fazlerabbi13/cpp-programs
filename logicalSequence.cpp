#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    for (int i = 1; i <= N; i++) {
        // First line for each i: i, i^2, i^3
        cout << i << " " << i*i << " " << i*i*i << endl;
        
        // Second line for each i: i, i^2+1, i^3+1
        cout << i << " " << i*i + 1 << " " << i*i*i + 1 << endl;
    }
    
    return 0;
}
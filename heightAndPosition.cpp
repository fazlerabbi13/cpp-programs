#include <iostream>
using namespace std;

int main() {
    int max_value = 0;
    int position = 0;
    
    for (int i = 1; i <= 100; ++i) {
        int num;
        cin >> num;
        
        if (num > max_value) {
            max_value = num;
            position = i;
        }
    }
    
    cout << max_value << endl;
    cout << position << endl;
    
    return 0;
}
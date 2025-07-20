#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> v(N);
    for (int i = 0; i < N; ++i) {
        cin >> v[i];
    }
    
    int x;
    cin >> x;
    // Adjusting to 0-based index
    v.erase(v.begin() + x - 1);
    
    int a, b;
    cin >> a >> b;
    // Adjusting to 0-based index, end is exclusive
    v.erase(v.begin() + a - 1, v.begin() + b - 1);
    
    cout << v.size() << endl;
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
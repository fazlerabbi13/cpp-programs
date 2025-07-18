#include <bits/stdc++.h>
using namespace std;

int main() {
    deque<int> dq = {1, 4, 2};

    // Inserting elements at back and front
    dq.push_back(5);
    dq.push_front(0);
    
    // Insert element at third position
    auto it = dq.begin() + 2;
    dq.insert(it, 11);

    for (auto x: dq) 
        cout << x << " ";
    return 0;
}
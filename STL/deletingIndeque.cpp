#include <bits/stdc++.h>
using namespace std;

int main() {
    deque<int> dq = {1, 4, 2, 3, 5};

    // Deleting from the back and front
    dq.pop_back();
    dq.pop_front();
    dq.erase(dq.begin());
    for (int i = 0; i < dq.size(); i++) 
        cout << dq[i] << " ";
    return 0;
}
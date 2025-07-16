#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

bool canMakeProducts(const vector<ll>& machines, ll t, ll time) {
    ll total = 0;
    for (ll m : machines) {
        total += time / m;
        if (total >= t) return true; // Early stopping if we already have enough
    }
    return total >= t;
}

int main() {
    int n;
    ll t;
    cin >> n >> t;

    vector<ll> machines(n);
    for (int i = 0; i < n; ++i) {
        cin >> machines[i];
    }

    ll low = 1;
    ll high = 1e18;
    ll answer = high;

    while (low < high) {
        ll mid = (low + high) / 2;
        if (canMakeProducts(machines, t, mid)) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }

    cout << low << endl;
    return 0;
}

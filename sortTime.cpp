#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Time {
    int hour, minute, second;
};

bool compare(const Time& a, const Time& b) {
    if (a.hour != b.hour) return a.hour < b.hour;
    if (a.minute != b.minute) return a.minute < b.minute;
    return a.second < b.second;
}

int main() {
    int n;
    cin >> n;

    vector<Time> times(n);

    for (int i = 0; i < n; ++i) {
        cin >> times[i].hour >> times[i].minute >> times[i].second;
    }

    sort(times.begin(), times.end(), compare);

    for (const Time& t : times) {
        cout << t.hour << " " << t.minute << " " << t.second << endl;
    }

    return 0;
}

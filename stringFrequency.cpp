#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> freq(128, 0);  

    for (char c : s) {
        freq[(int)c]++;
    }

    char result = 0;
    int maxFreq = 0;

    for (int i = 0; i < 128; ++i) {
        if (freq[i] > maxFreq || (freq[i] == maxFreq && i < result)) {
            maxFreq = freq[i];
            result = (char)i;
        }
    }

    cout << result << endl;
    return 0;
}

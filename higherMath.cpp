#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int caseNum = 1; caseNum <= T; ++caseNum) {
        int a, b, c;
        cin >> a >> b >> c;
        
        // To find the hypotenuse, we need the largest side
        int sides[3] = {a, b, c};
        sort(sides, sides + 3);
        
        // Check Pythagorean theorem: a² + b² = c² where c is the largest
        if (sides[0] * sides[0] + sides[1] * sides[1] == sides[2] * sides[2]) {
            cout << "Case " << caseNum << ": yes" << endl;
        } else {
            cout << "Case " << caseNum << ": no" << endl;
        }
    }
    return 0;
}
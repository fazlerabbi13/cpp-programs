#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float score1 = -1, score2 = -1;
    float sum = 0;
    int validScores = 0;
    
    while (validScores < 2) {
        float input;
        cin >> input;
        
        if (input >= 0 && input <= 10) {
            if (validScores == 0) {
                score1 = input;
            } else {
                score2 = input;
            }
            validScores++;
        } else {
            cout << "nota invalida" << endl;
        }
    }
    
    float average = (score1 + score2) / 2;
    cout << fixed << setprecision(2);
    cout << "media = " << average << endl;
    
    return 0;
}
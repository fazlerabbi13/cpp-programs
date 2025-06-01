#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i <= sqrt(num); ++i)
        if (num % i == 0)
            return false;
    return true;
}

// Function to get value of each letter
int getLetterValue(char c) {
    if (c >= 'a' && c <= 'z') return c - 'a' + 1;
    if (c >= 'A' && c <= 'Z') return c - 'A' + 27;
    return 0;
}

int main() {
    string word;
    while (cin >> word) {
        int sum = 0;
        for (char c : word)
            sum += getLetterValue(c);

        if (isPrime(sum))
            cout << "It is a prime word." << endl;
        else
            cout << "It is not a prime word." << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int number;

    // Input a three-digit number
    cout << "Enter a three-digit number: ";
    cin >> number;

    // Check if the input is a valid three-digit number
    if (number < 100 || number > 999) {
        cout << "Invalid input! Please enter a three-digit number." << endl;
        return 0;
    }

    // Extract digits
    int hundreds = number / 100;
    int tens = (number / 10) % 10;
    int ones = number % 10;

    // Reverse the number
    int reversed = ones * 100 + tens * 10 + hundreds;

    // Output the reversed number
    cout << "Reversed number: " << reversed << endl;

    return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double salary;
    cin >> salary;

    double increase_rate;
    if (salary <= 400.00) {
        increase_rate = 0.15;
    } else if (salary <= 800.00) {
        increase_rate = 0.12;
    } else if (salary <= 1200.00) {
        increase_rate = 0.10;
    } else if (salary <= 2000.00) {
        increase_rate = 0.07;
    } else {
        increase_rate = 0.04;
    }

    double money_earned = salary * increase_rate;
    double new_salary = salary + money_earned;

    cout << fixed << setprecision(2);
    cout << "Novo salario: " << new_salary << endl;
    cout << "Reajuste ganho: " << money_earned << endl;
    cout << "Em percentual: " << static_cast<int>(increase_rate * 100) << " %" << endl;

    return 0;
}
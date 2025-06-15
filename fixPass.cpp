#include <iostream>
using namespace std;

int main() {
    const int correct_password = 2002;
    int pass;
    
    while (true) {
        cin >> pass;
        if (pass == correct_password) {
            cout << "Acesso Permitido" << endl;
            break;
        } else {
            cout << "Senha Invalida" << endl;
        }
    }
    
    return 0;
}
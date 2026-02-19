#include <iostream>
using namespace std;

int main() {
    int base, exp, result = 1;

    cout << "Enter base and exponent: ";
    cin >> base >> exp;

    for(int i = 1; i <= exp; i++) {
        result = result * base;
    }

    cout << "Answer = " << result;

    return 0;
}
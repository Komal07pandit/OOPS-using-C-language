#include<iostream>
using namespace std;

int main() {
    int a, b, gcd;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    int min = (a < b) ? a : b;

    for(int i = 1; i <= min; i++) {
        if(a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }

    cout << "GCD = " << gcd;

    return 0;
}
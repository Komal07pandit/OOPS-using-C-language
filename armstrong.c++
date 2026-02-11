#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, original, remainder, result = 0;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    while (n != 0) {
        remainder = n % 10;
        result += pow(remainder, 3);
        n /= 10;
    }

    if (result == original)
        cout << original << " is an Armstrong number.";
    else
        cout << original << " is not an Armstrong number.";

    return 0;
}
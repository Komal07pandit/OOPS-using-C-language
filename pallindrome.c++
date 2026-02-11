#include <iostream>
using namespace std;
int main()
{
    int rev, rem, n, original;
    cout << "enter the number:";
    cin >> n;
    original = n;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    if (original == rev)
        cout << "pallindrome";
    else
        cout << "not pallindrome";
    return 0;
}
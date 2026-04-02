#include<iostream>
using namespace std;

class Father {
public:
    void money() {
        cout << "Father gives money\n";
    }
};

class Mother {
public:
    void love() {
        cout << "Mother gives love\n";
    }
};

class Child : public Father, public Mother {
public:
    void show() {
        cout << "Child inherits both\n";
    }
};

int main() {
    Child c;
    c.money();
    c.love();
    c.show();
}
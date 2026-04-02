#include<iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "Class A\n";
    }
};

class B : public A {
public:
    void showB() {
        cout << "Class B\n";
    }
};

class C {
public:
    void showC() {
        cout << "Class C\n";
    }
};

class D : public B, public C {
public:
    void showD() {
        cout << "Class D\n";
    }
};

int main() {
    D obj;
    obj.showA();
    obj.showB();
    obj.showC();
    obj.showD();
}
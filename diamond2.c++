#include<iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Class A\n";
    }
};

class B : public A {};
class C : public A {};

class D : public B, public C {};

int main() {
    D obj;

    // obj.show(); ❌ ERROR: ambiguity
    obj.B::show();   // manually resolve
    obj.C::show();
}
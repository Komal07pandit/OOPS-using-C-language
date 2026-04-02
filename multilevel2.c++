#include <iostream>
using namespace std;

class Person {
protected:
    string name;

public:
    Person(string n) {
        name = n;
    }
};

class Employee : public Person {
protected:
    int id;

public:
    Employee(string n, int i) : Person(n) {
        id = i;
    }
};

class Manager : public Employee {
private:
    string department;

public:
    Manager(string n, int i, string d) : Employee(n, i) {
        department = d;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager m("Komal", 101, "AI");

    m.display();

    return 0;
}
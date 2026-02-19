#include<iostream>
using namespace std;

class student 
{
    int id, tm = 0;
    char name[30];
    int marks[5];
    float p;
    char g;

public:
    void input();
    void cal ();
    void print();
};

void student :: input(){
    cout << "\nEnter student details " << endl;
    cout << "Enter id : " ;
    cin >> id;

    cout <<"Enter name : ";
    cin >> name ;

    cout <<"Enter marks : " << endl;
    for(int i = 0; i < 5; i++)
    {
        cin >> marks[i];
    }
}

void student :: cal()
{
    tm = 0;   
    for(int i = 0 ; i < 5; i++)
        tm += marks[i];

    p = tm / 5.0;

    if(p >= 90)
        g = 'O';
    else if(p >= 80)
        g = 'A';
    else if(p >= 70)
        g = 'B';
    else if(p >= 60)
        g = 'C';
    else
        g = 'F';
}

void student :: print()
{
    cout << id << "\t" << name << "\t" << tm << "\t\t" << p << "\t\t" << g << endl;
}

int main(){

    int n;
    cout << "How many students? ";
    cin >> n;

    student s[100];   

    for(int i = 0; i < n; i++)
    {
        s[i].input();
        s[i].cal();
    }

    cout << "\nID\tName\tTotal\tPercentage\tGrade\n";

    for(int i = 0; i < n; i++)
    {
        s[i].print();
    }

    return 0;
}
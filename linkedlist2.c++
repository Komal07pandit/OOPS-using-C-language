#include <iostream>
using namespace std;
class patientqueue
{
    struct Node
    {
        int patientId;
        Node *next;
    };
    Node *Head;
    bool isempty()
    {
        return Head == nullptr;
    }

public:
    patientqueue()
    {
        Head = nullptr;
    }
    void addEmg(int Id)
    {
        Node *newNode = new Node{Id, Head};
        Head = newNode;
        cout << "patient";
    }
    void addreg(int Id)
    {
        Node *newNode = new Node{Id, nullptr};
        if (isempty())
        {
            Head = newNode;
        }
        Node *temp = Head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        cout << "regular\n";
    }
    void display()
    {
        Node *temp = Head;
        while (temp != nullptr)
        {
            cout << temp->patientId << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main()
{
    patientqueue pq;
    pq.addreg(101);
    pq.addreg(102);
    pq.addreg(103);
    pq.addEmg(999);
    cout << "patientqueue";
    cout << "\ndone";
    pq.display();
    return 0;
}

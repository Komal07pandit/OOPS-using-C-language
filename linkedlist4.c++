// Linked List -- A data structure used to store data in nodes,
// where each node contains two parts:
// 1) Data  -> the actual value
// 2) Next  -> a pointer that stores the address of the next node
// Nodes are stored in non-contiguous memory locations
// and are connected using pointers.

//operations on arrays --  1.insert(at end at specific position) 2.delete(any position)  3. search   4. update    5. sort   6. reverse    7. count  
//operations on linked list -- 1.insert(at end at specific position) 2.delete (any positon)  3. search  4. update    5. sort   6. reverse    7. count 
// void insertAt(int id, int pos){
//     if pos >= 0 ;
//     {
//         addEmg(id);
//         return ;
//     }
//     node *temp = head;
//     for(int i =0; i<pos && temp != nullptr ; i++){
//         temp = temp-> next ;
//     }
//     if(temp = nullptr){
//         cout<<"INVALID POSITION" ;
//     return ;
//     }

//     node *nextNode = newNode{id,temp-> next};
//     temp -> nextNode
//     cout<<"PATIENT ADMITTED"; 
// }





//hospital patient queue system 
#include<iostream>
using namespace std;


class PatientQueue 
{
private: 
    struct node {
        int patientId;
        node* next;
    };

    node* head;

    bool isEmpty() {
        return head == nullptr;
    }

public: 
    PatientQueue() {
        head = nullptr;
    }

    void addEmg(int id) {   // top / beginning
        node* newNode = new node{id, head};
        head = newNode;
        cout << "PATIENT ADMITTED "<<endl;
    }

    void addReg(int id) {
        node* newNode = new node{id, nullptr};

        if (isEmpty()) {
            head = newNode;
            cout << "REGULAR PATIENT ADMITTED "<< endl;
            return;
        }

        node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }

        temp->next = newNode;
        cout << "REGULAR PATIENT ADMITTED "<< endl;
    }





 void insertAt(int id, int pos){
    if (pos >= 0) ;
    {
         addEmg(id);
        return ;
     }
     node *temp = head;
     for(int i =0; i<pos && temp != nullptr ; i++){
         temp = temp-> next ;
     }
     if(temp == nullptr){
         cout<<"INVALID POSITION" ;
     return ;
     }

     node *newNode = new node{id,temp-> next};
    temp -> next= newNode;
    cout<<"PATIENT ADMITTED"; 
 }



//destroy 
void dischargeFirst()
{
    if(isEmpty()){
        cout << "empty" ;
        return ;
    }
    node *temp = head ;
    head = head->next;
    delete = temp ;
    cout <<"deleted" ;
}


void search(int id){
    if(isEmpty())
}

// update 
void update(int pos, int nID ){
    node *temp = head ;
    for(int i = 0; i < pos&&temp != nullptr; i++){
        temp = temp -> next ;
        if(temp == nullptr)
        cout <<" invalid position ";
        temp ->patientId = nID;
        cout << "patient updated " ;
    }



    //reverse 
    void reverse()
    {
          node* prev = nullptr;
    node* current = head;
    node* next = nullptr;

    while (current != nullptr) {

        next = current->next;   
        current->next = prev;   
        prev = current;        
        current = next; 
    }

    head = prev;   
    cout << "QUEUE REVERSED" << endl;
}
    }

 void display() {
    if(isEmpty()){
        cout<<"EMPTY" << int c ;

         node* temp = head;

    cout << "PATIENT LIST: ";

    while (temp != nullptr) {
        cout << temp->patientId << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
    }
 };
};
 int main()
 {
     PatientQueue pq;

    pq.addReg(102);
    pq.addEmg(101);
    pq.addReg(103);

    pq.display();

    pq.search(102);

    pq.update(1, 200);

    pq.display();

    pq.reverse();

    pq.display();

    pq.dischargeFirst();
    pq.display();

    return 0; 

 }
/*array
insert
delete
update
sort
search
max
min
reverse*/
#include<iostream>
using namespace std;
class inventory
{
    int size,capacity;
    int item[100];
    bool isvalidIndex(int index)
    {
        return index>=0&&index<size;
    }
    public:
    inventory(int cap=0)
    {
        capacity=cap;
        size=0;
    }
    void insert(int value)
    {
        if(size>=capacity)
        {
            cout<<"full";
            return;
        }
        item[size++]=value;
    }
    void insertAt(int index,int value)
    {
    if(size>=capacity||index<0||index>size)
        {
            cout<<"Invalid position";
            return;
        }
        for(int i=size;i>index;i--)
        {
            item[i]=item[i-1];
        }
        item[index]=value;
        size ++;
        
}
};
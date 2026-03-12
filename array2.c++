#include <iostream>
using namespace std;

class inventory
{
    int size, capacity;
    int item[100]; // encapsulated data

    bool isvalidindex(int index)
    {
        return index >= 0 && index < size;
    }

public:
    inventory(int cap = 100)
    {
        capacity = cap;
        size = 0;
    }

    void insert(int value)
    {
        if (size >= capacity)
        {
            cout << "Inventory Full\n";
            return;
        }
        item[size++] = value;
    }

    void insertat(int index, int value)
    {
        if (size >= capacity || index < 0 || index > size)
        {
            cout << "Invalid Position\n";
            return;
        }

        for (int i = size; i > index; i--)
        {
            item[i] = item[i - 1];
        }

        item[index] = value;
        size++; // size increase hoga
    }

    void update(int index, int value)
    {
        if (!isvalidindex(index))
        {
            cout << "Invalid Index\n";
            return;
        }

        item[index] = value;
    }

    void remove(int index)
    {
        if (!isvalidindex(index))
        {
            cout << "Invalid Index\n";
            return;
        }

        for (int i = index; i < size - 1; i++)
        {
            item[i] = item[i + 1];
        }

        size--;
    }

    void display()
    {
        if (size == 0)
        {
            cout << "Inventory Empty\n";
            return;
        }

        for (int i = 0; i < size; i++)
        {
            cout << item[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    inventory obj;

    obj.insert(10);
    obj.insert(20);
    obj.insert(30);

    obj.display();

    obj.insertat(1, 15);
    obj.display();

    obj.update(2, 25);
    obj.display();

    obj.remove(1);
    obj.display();

    return 0;
}
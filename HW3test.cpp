#include <iostream>

using namespace std;

class Vector
{
private:
    int size;
    int *array;

public:
    // constructor
    Vector()
    {
        this->array = 0;
        this->size = 0;
    }
    Vector(int size)
    {
        set(size);
    }

    // destructor
    ~Vector()
    {
        delete[] this->array;
    }

    // set
    void set(int size)
    {
        this->size = size;
        this->array = new int[size];
    }

    void reS(int nS)
    {
        // delete[] this->array;
        this->array = new int[size];
        this->size = nS;
    }

    // get

    int length()
    {
        return this->size;
    }

    // show
    void setArray()
    {
        cout << "Enter your size " << endl;
        for (int i = 0; i < size; i++)
        {
            cout << "Array [" << i << "] = ";
            cin >> array[i];
        }
    };
    void show()
    {
        cout << "Show your size " << endl;
        for (int i = 0; i < size; i++)
        {
            cout << "Array[" << i << "] = " << array[i] << endl;
        }
    };
};

int main()
{
    Vector p;
    p.set(2);
    p.setArray();
    p.show();
    cout << "length Array = " << p.length() << endl;
    cout << "========================================" << endl;
    Vector s(3);
    s.setArray();
    s.show();
    cout << "length Array = " << s.length() << endl;
    cout << "========================================" << endl;
    s.reS(5);
    s.setArray();
    s.show();
    cout << "length Array = " << s.length() << endl;
    return 0;
};
#include <iostream>

using namespace std;

#include <iostream>

using namespace std;

class Stack
{
private:
    int *array;
    int size;
    int top;

public:
    // consturctor

    Stack()
    {
        this->array = 0;
        this->size = 0;
    }
    Stack(int size)
    {
        set(size);
    }

    // desturctor
    ~Stack()
    {
        delete[] this->array;
    }

    // set
    void set(int size)
    {
        this->size = size;
        this->array = new int[size];
    }

    // push
    void push(int value)
    {
    }

    // pop
    void pop()
    {
    }

    // isFull
    bool isFull()
    {
    }

    // isEmpty
    bool isEmpty()
    {
    }

    // get
    int get()
    {
    }

    int count()
    {
    }

    // show
    void setArray()
    {
    }

    void show()
    {
        cout << "Stack Elements: ";
        for (int i = 0; i < size; i++)
        {
            if (this->array[i] != 0)
            {
                cout << array[i] << " ";
            }
            else
            {
                break;
            }
        }
        cout << endl;
    }
};

int main()
{
    Stack stack(5);
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.show();

    stack.pop();
    stack.show();

    cout << "Top element: " << stack.get() << endl;
    cout << "Number of elements in the stack: " << stack.count() << endl;

    return 0;
}
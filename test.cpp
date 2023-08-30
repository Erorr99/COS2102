#include <iostream>
using namespace std;
class A
{
    int a;

public:
    A()
    {
        a = 1;
        cout << "A" << endl;
    }
    A(int i)
    {
        a = i + 2;
        cout << "AA" << endl;
    }
    ~A()
    {
        cout << "bye a " << a << endl;
    }
    int subscript(int n)
    {
        cout << "a[]" << endl;
        for (int i = 1; i <= n; i++)
            a += 2;
        return a;
    }
    int get() { return a; }
};
class B : public A
{
    int b;

public:
    B()
    {
        b = 2;
        cout << "B" << endl;
    }
    B(int i, int j) : A(j)
    {
        b = i;
        cout << "BB" << endl;
    }
    ~B()
    {
        cout << "bye b " << b << endl;
    }

    B &subscript(int n)
    {
        cout << "b[]" << endl;
        A::subscript(n);
        for (int i = 1; i <= n; i++)
            b *= 2;
        return *this;
    }
    int get() { return b; }
};
class C
{
    B bb;

public:
    C()
    {
        bb.subscript(2);
        cout << "C" << endl;
    }
    C(int i)
    {
        bb.subscript(i);
        cout << "CC" << endl;
    }
    ~C()
    {
        cout << "bye c " << endl;
    }
    C subscript(int n)
    {
        cout << "c[]" << endl;
        return C(n);
    }
    B get() { return bb; }
};
int main()
{
    C c1;
    C c2(3);
    B b(1, 2);
    b = c1.subscript(1).get();
    cout << "---end---" << endl;
}

#include "iostream"
#include "string"
#include "cstring"

using namespace std;

class Point
{
private:
    double x, y;
    string name1;
    char name2[20];

public:
    void setXY(double x, double y)
    {
        this->x = x;
        this->y = y;
    }
    void setX(double x)
    {
        this->x = x;
    }

    void setY(double y)
    {
        this->y = y;
    }

    void setName1(string name1)
    {
        this->name1 = name1;
    }

    void setName2(char *name2)
    {
        strcpy(this->name2, name2);
    }

    char *getName2()
    {
        return this-> name2;
    }

    string getName1()
    {
        return this-> name1;
    };
    double getX()
    {
        return this-> x;
    };
    double getY()
    {
        return this-> y;
    };

    void show()
    {
        cout << "-----------------------------------------" << endl;
        cout << "| Name | " << this-> name1 << endl;
        cout << "| Name | " << this-> name2 << endl;
        cout << "| x    | " << this-> x << endl;
        cout << "| y    | " << this-> y << endl;
        cout << "-----------------------------------------" << endl;
    };
};

int main()
{
    Point pointer;
    pointer.setXY(2.2, 3.6);
    pointer.setName1("A");
    pointer.setName2("B");
    cout << pointer.getName1() << endl;
    cout << pointer.getName2() << endl;
    cout << pointer.getX() << endl;
    cout << pointer.getY() << endl;
    pointer.setX(4.1);
    pointer.setY(5.5);

    pointer.setName1("C");
    pointer.setName2("D");
    cout << pointer.getName1() << endl; 
    cout << pointer.getName2() << endl;
    cout << pointer.getX() << endl;
    cout << pointer.getY() << endl;
    
    pointer.show();
    return 0;
};

#include <string>
#include <cstring>
#include <iostream>
using namespace std;

class Point
{
    static int num;
    double x, y;
    string name1;
    char name2[20];

public:
    // constructor
    Point()
    {
        num++;
        this->x = 0.0;
        this->y = 0.0;
        this->name1 = "";
        strcpy(this->name2, "");
    }
    Point(double x)
    {
        num++;
        this->x = x;
        this->y = 0.0;
        this->name1 = "";
        strcpy(this->name2, "");
    };
    Point(double x, double y)
    {
        num++;
        this->x = x;
        this->y = y;
        this->name1 = "";
        strcpy(this->name2, "");
    };
    Point(double x, double y, string name1)
    {
        num++;
        this->x = x;
        this->y = y;
        this->name1 = "name1";
        strcpy(this->name2, "");
    };
    Point(double x, double y, string name1, char *name2)
    {
        num++;
        this->x = x;
        this->y = y;
        this->name1 = name1;
        strcpy(this->name2, "name2");
    }

    // get
    double getX() { return this->x; };
    double getY() { return this->y; };
    string getName1() { return this->name1; };
    char *getName2() { return this->name2; }

    // set
    void setName1(string name1) { this->name1 = name1; };
    void setName2(char *name2) { strcpy(this->name2, name2); };
    void setXY(double x, double y)
    {
        this->x = x;
        this->y = y;
    };
    void setX(double x) { this->x = x; };

    // destructor
    ~Point() { num--; };

    static int count()
    {
        return num;
    };

    void show()
    {
        cout << "x = " << this->x << endl;
        cout << "y = " << this->y << endl;
        cout << "name1 = " << this->name1 << endl;
        cout << "name2 = " << this->name2 << endl;
    }
};

int Point::num;

int main()
{
    cout << "count " << Point::count() << endl;
    Point p1;
    p1.show();
    cout << "=================================" << endl;
    cout << "count " << Point::count() << endl;
    {
        Point p2(2.0,4.2);
        p2.setName1("B_ONE");
        p2.setName2("B_TWO");
        cout << "X : " << p2.getX() << endl;
        cout << "Y : " << p2.getY() << endl;
        cout << "name 1 :" << p2.getName1() << endl;
        cout << "name 1" << p2.getName2() << endl;
        cout << "=================================" << endl;
        Point p3(4.2, 6.4);
        p3.setName1("B_One");
        p3.show();
        cout << "count " << Point::count() << endl;
    };
    cout << "count " << Point::count() << endl;
    cout << "=================================" << endl;
    Point p4(3.0, 4.0);
    p4.show();
    cout << "=================================" << endl;
    cout << "count " << Point::count() << endl;

    return 0;
}
#include <string>
#include <cstring>
#include <iostream>
using namespace std;

class Point
{
    static int num;
    double x, y;
    string name1;

public:
    // constructor
    Point()
    {
        num++;
        this->x = 0.0;
        this->y = 0.0;
        this->name1 = "";
    }
    Point(double x)
    {
        num++;
        this->x = x;
        this->y = 0.0;
        this->name1 = "";
    };
    Point(double x, double y)
    {
        num++;
        this->x = x;
        this->y = y;
        this->name1 = "";
    };
    Point(double x, double y, string name1)
    {
        num++;
        this->x = x;
        this->y = y;
        this->name1 = name1;
    };

    // get
    double getX() { return this->x; };
    double getY() { return this->y; };
    string getName1() { return this->name1; };

    // set
    void setName1(string name1) { this->name1 = name1; };
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
    }
};

class Circle
{
private:
    double radius;

public:
    // constructor

    Circle()
    {
        this->radius = 0.0;
    }

    Circle(double)
    {
        this->radius = radius;
    }

    double getRadius()
    {
        return this->radius;
    }

    void setRadius(double radius)
    {
        this->radius = radius;
    }

        // Point midpoint(Point &d1, Point &d2)
    // {
    //     this->setXY((d1.x + d2.x) / 2, (d1.y + d2.y) / 2);
    //     this->name1 = "midpoint";
    //     return *this;
    // }
};
int Point::num;

int main()
{
    cout << "count " << Point::count() << endl;
    Point d1(2.0, 3.0, "s");
    Point d2(4.0, 5.0, "s1");
    Point d3;
    Point mid = d3.midpoint(d1, d2);

    cout << "d3:" << endl;
    d3.show();

    cout << "midpoint:" << endl;
    mid.show();
    // cout << "=================================" << endl;
    // cout << "count " << Point::count() << endl;
    // {
    //     Point p2(2.0, 4.2);
    //     p2.setName1("B_ONE");
    //     cout << "Y : " << p2.getY() << endl;
    //     cout << "name 1 :" << p2.getName1() << endl;
    //     cout << "=================================" << endl;
    //     Point p3(4.2, 6.4);
    //     p3.setName1("B_One");
    //     p3.show();
    //     cout << "count " << Point::count() << endl;
    // };
    // cout << "count " << Point::count() << endl;
    // cout << "=================================" << endl;
    // Point p4(3.0, 4.0);
    // p4.show();
    // cout << "=================================" << endl;
    // Point p5(6.5);
    // p5.show();
    // cout << "=================================" << endl;
    // cout << "count " << Point::count() << endl;

    return 0;
}
#include <string>
#include <cstring>
#include <iostream>
using namespace std;

// class Point HW5
// class Circle HW5
//friend class Circle;
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
};

// class Circle HW5

class Circle
{
    static int num;
    Point center;
    double radius;
    string name2;

public:

    // constructor
    Circle()
    {
        num++;
        this->center = Point();
        this->radius = 0.0;
        this->name2 = "";
    }
    Circle(Point center)
    {
        num++;
        this->center = center;
        this->radius = 0.0;
        this->name2 = "";
    }
    Circle(Point center, double radius)
    {
        num++;
        this->center = center;
        this->radius = radius;
        this->name2 = "";
    }
    Circle(Point center, double radius, string name2)
    {
        num++;
        this->center = center;
        this->radius = radius;
        this->name2 = name2;
    }

    // get
    Point getCenter() { return this->center; };
    double getRadius() { return this->radius; };
    string getName2() { return this->name2; };

    // set
    void setCenter(Point center) { this->center = center; };
    void setRadius(double radius) { this->radius = radius; };
    void setName2(string name2) { this->name2 = name2; };

    // destructor
    ~Circle() { num--; };

    static int count()
    {
        return num;
    };

    // HW5.1
    // friend class Point;
    friend class Point;
};

int Point::num = 0;
int Circle::num = 0;

int main()
{
    Point p1(1.0, 2.0, "p1");
    Point p2(3.0, 4.0, "p2");
    Point p3(5.0, 6.0, "p3");
    Point p4(7.0, 8.0, "p4");
    Point p5(9.0, 10.0, "p5");
    Point p6(11.0, 12.0, "p6");
    Point p7(13.0, 14.0, "p7");
    Point p8(15.0, 16.0, "p8");
    Point p9(17.0, 18.0, "p9");
    Point p10(19.0, 20.0, "p10");

    Circle c1(p1, 1.0, "c1");
    Circle c2(p2, 2.0, "c2");
    Circle c3(p3, 3.0, "c3");
    Circle c4(p4, 4.0, "c4");
    Circle c5(p5, 5.0, "c5");
    Circle c6(p6, 6.0, "c6");
    Circle c7(p7, 7.0, "c7");
    Circle c8(p8, 8.0, "c8");
    Circle c9(p9, 9.0, "c9");
    Circle c10(p10, 10.0, "c10");

    cout << "Point::count() = " << Point::count() << endl;
    cout << "Circle::count() = " << Circle::count() << endl;

    return 0;
}
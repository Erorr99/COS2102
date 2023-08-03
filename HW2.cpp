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
        this->name1 = "name1";
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

    double dot(Point &p)
    {
        p.x += 10.5; // ลองบวกค่า
        p.y += 7.8;  // ลองบวกค่า
        return this->x * p.x + this->y * p.y;
    };

    Point midpoint(Point &p1, Point &p2)
    {
        return Point((p1.x + p2.x) / 2, (p1.y + p2.y) / 2, "midpoint");
    }
};

int Point::num;

int main()
{
    cout << "count " << Point::count() << endl;
    Point p1(2, 3, "s");
    Point p2(4, 5, "s1");
    cout << "s.dot(s1)" << p1.dot(p2) << endl;
    Point mid = p1.midpoint(p1, p2);
    mid.setName1("p1,p2,midpoi");
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
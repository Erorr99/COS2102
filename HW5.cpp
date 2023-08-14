#include <string>
#include <cstring>
#include <iostream>
#include <cmath>
using namespace std;

class Circle;

class Point
{
    static int num;
    double x, y;
    string name1;

public:
    // constructor
    friend bool circlep(Circle &c, Point &p);
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
    Point center;

public:
    // friend bool circlep(Circle &c, Point &p);
    Circle()
    {
        this->radius = 0.0;
    }

    Circle(double radius)
    {
        this->radius = radius;
    }

    Circle(double radius, Point center)
    {
        this->radius = radius;
        this->center = center;
    }

    Circle(double radius, double x, double y)
    {
        this->radius = radius;
        this->center.setXY(x, y);
    }

    ~Circle()
    {
    }

    double getRadius()
    {
        return this->radius;
    }

    Point getCenter()
    {
        return this->center;
    }

    void setRadius(double radius)
    {
        this->radius = radius;
    }

    void setCenter(Point center)
    {
        this->center = center;
    }

    void show()
    {
        cout << "radius = " << radius << endl;
    }
};

bool circlep(Circle &c, Point &p)
{
    double distance = sqrt(pow((p.x - c.getCenter().x), 2) + pow((p.x - c.getCenter().y), 2));
    if (distance <= c.getRadius())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int Point::num;

int main()
{

    Point p(5.5, 7.7);
    Point q(3.7, 4.2);
    Point r(2.5, 1.0);

    Circle c;
    c.show();
    cout << endl;

    Circle c2(5.5, p);
    c2.show();
    cout << "radius: " << c2.getRadius() << endl;
    cout << "center: " << endl;
    c2.getCenter().show();
    c2.getCenter().getName1();
    cout << endl;

    c2.setRadius(5.5);
    c2.setCenter(p);
    c2.show();
    cout << endl;

    // cout << "circlep: " << c2.circlep(c2, q) << endl;
    cout << "circlep: " << circlep(c2, q) << endl;
    return 0;
}
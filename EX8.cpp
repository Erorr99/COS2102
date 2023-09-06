#include <iostream>
using namespace std;

class Rectangle
{
private:
    static int num;
    double width;
    double length;

public:
    // constructor
    Rectangle()
    {
        num++;
        this->width = 0.0;
        this->length = 0.0;
    }
    Rectangle(double width)
    {
        num++;
        this->width = width;
        this->setLength(0.0);
    }
    Rectangle(double width, double length)
    {
        num++;
        this->width = width;
        this->length = length;
    }

    Rectangle operator++()
    {
        ++width;
        return *this;
    }

    Rectangle operator++()
    {
        return Rectanglea(++length);
    }
    Rectangle operator--(int)
    {
        --width;
        return *this;
    }
    Rectangle operator--(int)
    {
        return Rectangle(--length);
    }

    // set

    void setLength(double length)
    {
        this->length = length;
    }
    void setWidth(double width)
    {
        this->width = width;
    }

    // get

    double getLength()
    {
        return this->length;
    }
    double getWidth()
    {
        return this->width;
    }

    // process

    double perimeter()
    {
        double result;
        result = (width + length) * 2;
        return result;
    }
    double area()
    {
        double rearea;
        rearea = width * length;
        return rearea;
    }

    // static
    static int count()
    {
        return num;
    }

    // destructor

    ~Rectangle()
    {
        num--;
    }
}
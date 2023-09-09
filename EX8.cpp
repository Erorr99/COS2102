#include <iostream>
using namespace std;

class Rectangle
{
private:
    double width;
    double length;

public:
    // constructor
    Rectangle()
    {
        this->width = 1.0;
        this->length = 1.0;
    }
    Rectangle(double width)
    {
        this->width = width;
        this->setLength(0.0);
    }
    Rectangle(double width, double length)
    {
        this->width = width;
        this->length = length;
    }

    Rectangle operator++()
    {
        ++width;
        return *this;
    }

    Rectangle operator++(int)
    {
        return Rectangle(++length);
    }
    friend Rectangle operator--(Rectangle &r1)
    {
        r1.width;
        return r1;
    }
    friend Rectangle operator--(Rectangle &r1, int)
    {
        r1.length--;
        return r1;
    }

    // void operator[](int index)
    // {
    //     if (index == 0)
    //     {
    //         cout << "Width : " << width << endl;
    //     }
    //     else if (index == 1)
    //     {
    //         cout << "Length : " << length << endl;
    //     }
    // }

    void operator()(int index)
    {
        if (index == 0)
        {
            cout << "Width : " << width << endl;
        }
        else if (index == 1)
        {
            cout << "Length : " << length << endl;
        }
    }

    void operator()(double width, double length)
    {
        this->width = width;
        this->length = length;
    }

    void operator()(double width)
    {
        this->width = width;
        this->setLength(0.0);
    }

    void operator()()
    {
        this->show();
    }

    bool Rectangle::operator<(Rectangle &a)
    {
        if (this->area() < a.area())
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool Rectangle::operator>(Rectangle &a)
    {
        if (this->area() > a.area())
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool Rectangle::operator<=(Rectangle &a)
    {
        if (this->area() <= a.area())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool Rectangle::operator>=(Rectangle &a)
    {
        if (this->area() >= a.area())
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool Rectangle::operator!=(Rectangle &a)
    {
        if (this->area() != a.area())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void setLength(double length)
    {
        this->length = length;
    }
    void setWidth(double width)
    {
        this->width = width;
    }

    double getLength()
    {
        return this->length;
    }
    double getWidth()
    {
        return this->width;
    }

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

    // destructor

    ~Rectangle()
    {
    }
    void show()
    {
        cout << "Width : " << width << endl;
        cout << "Length : " << length << endl;
        cout << "Perimeter : " << perimeter() << endl;
        cout << "Area : " << area() << endl;
    }
};

int main()
{
    Rectangle r1(2.0, 3.0);
    r1.show();
    cout << endl;

    r1(4.0);
    r1.show();
    cout << endl;

    r1(4.0, 5.0);
    r1.show();
    cout << endl;

    r1[0];
    r1[1];
    cout << endl;

    r1(0);
    r1(1);
    cout << endl;

    Rectangle r2(1, 1), r3(2, 2);
    if (r2 < r3)
    {
        cout << "r2 < r3" << endl;
    }
    else
    {
        cout << "r2 > r3" << endl;
    }

    return 0;
}
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

    Rectangle operator++()
    {
        return Rectanglea(++length);
    }
    friend Rectangle operator--(int)
    {
        --width;
        return *this;
    }
    friend Rectangle operator--(int)
    {
        return Rectangle(--length);
    }

    void operator[](int index)
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
    // set

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

    // destructor

    ~Rectangle()
    {
    }
    void show()
    {
        cout << "╔═══════════════╦════════════════════════╗" << endl;
        cout << "║    Length     ║" << setw(12) << this->length << "\t\t\t\b\b\b\b\b\b\b\b ║" << endl;
        cout << "╠═══════════════╬════════════════════════╣" << endl;
        cout << "║    Width      ║" << setw(12) << this->width << "\t\t\t\b\b\b\b\b\b\b\b ║" << endl;
        cout << "╠═══════════════╬════════════════════════╣" << endl;
        cout << "║   Perimeter   ║" << setw(12) << perimeter() << "\t\t\t\b\b\b\b\b\b\b\b ║" << endl;
        cout << "╠═══════════════╬════════════════════════╣" << endl;
        cout << "║     Area      ║" << setw(12) << area() << "\t\t\t\b\b\b\b\b\b\b\b ║" << endl;
        cout << "╚═══════════════╩════════════════════════╝" << endl;
    }
}

int
main()
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

    r1++;
    r1.show();
    cout << endl;

    r1--;
    r1.show();
    cout << endl;

    return 0;
}
#include <string>
#include <iostream>
#include <iomanip>
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
        this->setWidth(width); // this-> width = width
        this->setLength(0.0);
    }
    Rectangle(double width, double length)
    {
        num++;
        this->setWidth(width);
        this->setLength(length);
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

    // show

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
};

int Rectangle::num;

int main()
{
    Rectangle r0(4.2, 4.1);
    r0.show();
    Rectangle r1;
    r1.setLength(2.2);
    r1.setWidth(3.5);
    cout << "length : " << r1.getLength() << endl;
    cout << "Width : " << r1.getWidth() << endl;
    cout << "Perimeter : " << r1.perimeter() << endl;
    cout << "Area : " << r1.area() << endl;
    cout << "count : " << Rectangle::count() << endl;
    {
        Rectangle r2(2.3, 2.9);
        cout << "count : " << Rectangle::count() << endl;
    }
    cout << "count : " << Rectangle::count() << endl;
    Rectangle r3(7.0, 1.2); //
    cout << "count : " << Rectangle::count() << endl;

    return 0;
};
#include <iostream>
#include <iomanip>

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
        this->width = 0.0;
        this->length = 0.0;
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
};

class MyRect
{
private:
    int row, col;
    Rectangle **array;

    void set(int row, int col)
    {
        this->row = row;
        this->col = col;

        this->array = new Rectangle *[row];
        for (int i = 0; i < row; i++)
        {
            array[i] = new Rectangle[col];
        };
    }

public:
    // constructor
    MyRect()
    {
        this->array = 0;
        this->row = 0;
        this->col = 0;
    }
    MyRect(int row, int col)
    {
        set(this->row, this->col);
    }

    // destuctor
    ~MyRect()
    {
        if (array != 0)
        {
            for (int i = 0; i < row; i++)
            {
                delete[] array[i];
            };
            delete[] array;
        };
    }

    // set

    void setRect()
    {
        int w, l;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << "width = " << endl;
                cin >> w;
                cout << "length = " << endl;
                cin >> l;
                Rectangle r(w, l);
                this->array[i][j] = r;
            }
        }
    }

    void Re(Rectangle array)
    {
    }
    void reset(int row, int col)
    {
        if (row == row && col == col)
        {
            return;
        }
        MyRect();
        set(row, col);
    }

    Rectangle getRect(int row, int col)
    {
        return array[row][col];
        ;
    }
    void show()
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << "Rectangle wid= " << array[i] << "hight =" << array[j] << endl;
            }
        }
    }
};

int main()
{
    MyRect p(2, 3);
    p.setRect();
    p.show();

    return 0;
};

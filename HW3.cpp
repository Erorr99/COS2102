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

    // show
    void show()
    {
        cout << "width = " << width << endl;
        cout << "length = " << length << endl;
        cout << "perimeter = " << perimeter() << endl;
        cout << "area = " << area() << endl;
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
            this->array[i] = new Rectangle[col];
        };
    }

    void del()
    {
        for (int i = 0; i < row; i++)
        {
            delete[] array[i];
        };
        delete[] array;
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
        set(row, col);
    }

    // destuctor
    ~MyRect()
    {
        this->del();
    }

    // set

    void setRect()
    {
        int w, l;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << "width = ";
                cin >> w;
                cout << "length = ";
                cin >> l;
                Rectangle r(w, l);
                // this->array[i][j] = r;
                this->array[i][j].setLength(l);
                this->array[i][j].setWidth(w);
            }
        }
    }

    void setwl(int row, int col, double width, double length)
    {
        array[row][col].setWidth(width);
        array[row][col].setLength(length);
    }

    // set row and col

    void setRow(int row)
    {
        this->row = row;
    }
    void setCol(int col)
    {
        this->col = col;
    }

    void object(int row, int col, Rectangle &a)
    {
        this->array[row][col] = a;
    }

    void reset(int newrow, int newcol)
    {
        if (newrow == row && newcol == col)
        {
            return;
        }
        this->del();
        set(newrow, newcol);
    }

    Rectangle getRect(int row, int col)
    {
        return array[row][col];
    }
    void show()
    {
        cout << "row [" << this->row << "][" << this->col << "]" << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                this->array[i][j].show();
            }
        }
    }
};

int main()
{
    int row, col;
    double width, length;
    MyRect n;

    cout << "========== set 1 ==========" << endl;
    MyRect mr(2, 3);
    mr.setRect();
    mr.show();

    cout << "========== set 2 ==========" << endl;
    do
    {
        cout << "row = ";
        cin >> row;
    } while (row > 2);
    do
    {
        cout << "col = ";
        cin >> col;
    } while (col > 3);
    Rectangle r1(1, 2);
    mr.object(row, col, r1);
    mr.show();

    cout << "========== set 3 ==========" << endl;
    do
    {
        cout << "row = ";
        cin >> row;
    } while (row > 1);
    do
    {
        cout << "col = ";
        cin >> col;
    } while (col > 2);

    cout << "width = ";
    cin >> width;
    cout << "length = ";
    cin >> length;
    mr.setwl(row, col, width, length);

    cout << "========== get ==========" << endl;
    do
    {
        cout << "row = ";
        cin >> row;
    } while (row > 1);
    do
    {
        cout << "col = ";
        cin >> col;
    } while (col > 2);
    Rectangle r2 = mr.getRect(row, col);
    r2.show();

    cout << "========== set before Reset ==========" << endl;
    mr.show();
    cout << "========== set after Reset ==========" << endl;
    mr.reset(3, 4);
    mr.show();
    return 0;
};

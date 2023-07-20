#include "iostream"
#include "string"
#include "cstring"

using namespace std;

class Point
{
    static int num;
    double x, y;
    string name1;
    char name2[20];

public:
    Point()
    {
        num++;
        this->set(0.0, 0.0, "", "");
    }
    Point(double x)
    {
        num++;
        this->set(x, 0.0 ,"","");
    }
    Point(double x, double y)
    {
        num++;
        this->set(x, y, "", "");
    };
    Point(double x, double y, string name1 ){
        num++;        this->set(x, y, "name1", "");
    };
    Point(double x, double y, string name1, char *name2){
        num++;
        this->set(x, y, "name1", "name2");
    };
    
    ~Point()
    {
        num--;
    }

    void set(double x, double y, char *name2, string name1)
    {
        this->x = x;
        this->y = y;
        this->name1 = name1;
        strcpy(this->name2, name2);
    }
    char *getName2()
    {
        return this->name2;
    }

    string getName1()
    {
        return this->name1;
    };
    double getX()
    {
        return this->x;
    };
    double getY()
    {
        return this->y;
    };
    static int count()
    {
        return num;
    };
};

int Point::num;

int main(){
    cout << Point::count() << endl;
    Point N1;
    cout << Point::count() << endl;
    {
        Point N2(1.0,3.2,"dwa");
        cout << N2.getName1() << endl;
        
        Point N3(2.1,4.2,"grs");
        cout << N3.getName2() << endl;
        cout << Point::count() << endl;
    }
    Point N4(1.2,2.4,"");
    cout << Point::count() << endl;

};
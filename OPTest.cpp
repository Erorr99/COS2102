#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
    static int num;
    int id, day, mounth, year;
    string first, last;
    int bd[3];

public:
    // constructor
    Person() {}
    Person(int id)
    {
        this->set(id, "", "", 0, 0, 0);
    }
    Person(int id, string first)
    {
        this->set(id, "first", "", 0, 0, 0);
    }
    Person(int id, string first, string last)
    {
        this->set(id, "first", "last", 0, 0, 0);
    }
    Person(int id, string first, string last, int db)
    {
        this->set(id, "first", "last", day, 0, 0);
    }
    Person(int id, string first, string last, int db)
    {
        this->set(id, "first", "last", day, mounth, 0);
    }
    Person(int id, string first, string last)
    {
        this->set(id, "first", "last", day, mounth, year);
    }

    // set
    void set(int id, string first, string last, int day, int mounth, int year, int bd)
    {
        this->id = id;
        this->first = first;
        this->last = last;
        this->bd[0] = day;
        this->bd[1] = mounth;
        this->bd[2] = year;
    }
    void setId(int id) {}
    void setDay(int day) {}
    void setMounth(int mounth) {}
    void setFirst(string first) {}
    void setLast(string last) {}

    // get

    int getId() {}
    int getday() {}
    int getMounth() {}
    int getYear() {}
    string getFirst() {}
    string getLast() {}

    // destructor
    ~Person()
    {
        num--;
    }
};
int main()
{
    Person s1(6);
    Person show();
    return 0;
}
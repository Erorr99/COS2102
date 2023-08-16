#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Date
{
private:
    int day, month, year;

public:
    Date()
    {
        day = 0;
        month = 0;
        year = 0;
    }
    Date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    int getDate(int day)
    {
        return this->day;
    }
    int getMonth(int month)
    {
        return this->month;
    }
    int getYear(int year)
    {
        return this->year;
    }

    void setDate(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    void printDate()
    {
        cout << day << "/" << month << "/" << year << endl;
    }
};

class Address
{
private:
    string add, city;
    char zipcode[5];

public:
    Address()
    {
        add = "";
        city = "";
        strcpy(this->zipcode, "Null");
    }
    Address(string add, string city, string zipcode)
    {
        this->add = add;
        this->city = city;
        strcpy(this->zipcode, zipcode.c_str());
    }
    void setadd(string add)
    {
        this->add = add;
    }
    void setcity(string city)
    {
        this->city = city;
    }
    void setzipcode(string zipcode)
    {
        strcpy(this->zipcode, zipcode.c_str());
    }
    void setAll(string add, string city, string zipcode)
    {
        this->add = add;
        this->city = city;
        strcpy(this->zipcode, zipcode.c_str());
    }

    string getAdd()
    {
        return this->add;
    }
    string getCity()
    {
        return this->city;
    }
    char *getZipcode()
    {
        return this->zipcode;
    }

    void printAddress()
    {
        cout << add << ", " << city << ", " << zipcode << endl;
    }
};

class Person
{
private:
    string fristName, lastName;
    Date dates;
    Address add;

public:
    Person()
    {
        fristName = "";
        lastName = "";
    }
    Person(string fristName, string lastName, Date &dates, Address &add)
    {
        this->fristName = fristName;
        this->lastName = lastName;
        this->dates = dates;
        this->add = add;
    }
    void set(string fristName, string lastName, Date &dates, Address &add)
    {
        this->fristName = fristName;
        this->lastName = lastName;
        this->dates = dates;
        this->add = add;
    }
    string getFristName()
    {
        return this->fristName;
    }
    string getLastName()
    {
        return this->lastName;
    }
    Date getDate()
    {
        return this->dates;
    }
    Address getAddress()
    {
        return this->add;
    }
    void show()
    {
        cout << fristName << " " << lastName << ", ";
        dates.printDate();
        add.printAddress();
    }
};

class Student : public Person
{
private:
    string studentID, group;

public:
    Student()
    {
        studentID = "";
        group = "";
    }
    Student(string studentID, string group, string firstname, string lastname, Date dates, Address add) : Person(firstname, lastname, dates, add)
    {
        this->studentID = studentID;
        this->group = group;
    }
    void set(string studentID, string group)
    {
        this->studentID = studentID;
        this->group = group;
    }
    string getStudentID()
    {
        return this->studentID;
    }
    string getGroup()
    {
        return this->group;
    }
    void printStudent()
    {
        Person::show();
        cout << studentID << ", " << group << endl;
    }
};

int main()
{
    Student s1("B20DCCN001", "D17CQCN01-B", "Nguyen", "Van A", Date(1, 1, 2000), Address("123 Nguyen Trai", "Ha Noi", "100000"));
    s1.show();
    cout << "something" << endl;

    return 0;
};
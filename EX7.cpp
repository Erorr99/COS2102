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
        cout << "Bith : Day " << day << " Month : " << month << " Year : " << year << endl;
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
        cout << "Address : " << add << " City : " << city << " Zipcode : " << zipcode << endl;
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

    ~Person()
    {
        cout << fristName << "bye" << endl;
    }
    void setfirst(string fristName, string lastName, Date &dates, Address &add)
    {
        this->fristName = fristName;
        this->lastName = lastName;
        this->dates = dates;
        this->add = add;
    }
    // void setfirst(string fristName)
    // {
    //     this->fristName = fristName;
    // }
    // void setlast(string lastName)
    // {
    //     this->lastName = lastName;
    // }
    // void setdate(Date &dates)
    // {
    //     this->dates = dates;
    // }
    // void setadd(Address &add)
    // {
    //     this->add = add;
    // }
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
        cout << "Firstname : " << fristName << " LastName : " << lastName << endl;
        dates.printDate();
        add.printAddress();
    }
};

class Student : virtual public Person
{
private:
    string studentID, group;

public:
    Student()
    {
        studentID = "";
        group = "";
    }
    Student(string studentID, string group) {}
    Student(string studentID, string group, string firstname, string lastname, Date dates, Address add) : Person(firstname, lastname, dates, add)
    {
        this->studentID = studentID;
        this->group = group;
    }
    ~Student()
    {
        cout << "Student bye " << getFristName() << endl;
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
        cout << "ID : " << studentID << " Group : " << group << endl;
    }
};

class Teacher : virtual public Person
{
private:
    string TeacherID, faculty;

public:
    Teacher()
    {
        TeacherID = "";
        faculty = "";
    }
    Teacher(string TeacherID, string faculty)
    {
        this->TeacherID = TeacherID;
        this->faculty = faculty;
    }
    Teacher(string TeacherID, string faculty, string fristName, string lastName, Date dates, Address add) : Person(fristName, lastName, dates, add)
    {
        this->TeacherID = TeacherID;
        this->faculty = faculty;
        // this->setfirst(firstname);
        // this->setlast(lastname);
        // this->setdate(dates);
        // this->setadd(add);
        // Person::setfirst(fristName, lastName, dates, add);
    }
    ~Teacher()
    {
        cout << "Teacher bye " << getFristName() << endl;
    }
    void setTeacher(string TeacherID, string faculty)
    {
        this->TeacherID = TeacherID;
        this->faculty = faculty;
    }

    string getTeacherID()
    {
        return this->TeacherID;
    }
    string getFaculty()
    {
        return this->faculty;
    }

    void printTeacher()
    {
        Person::show();
        cout << "TeacherID :" << TeacherID << " Faculty : " << faculty << endl;
    }
};

class TeachingAssistant : public Student, public Teacher
{
private:
    string salary;
    string certificate_id;

public:
    TeachingAssistant()
    {
        this->salary = "";
        this->certificate_id = "";
    }
    TeachingAssistant(string salary, string certificate_id, string TeacherID, string faculty, string studentID, string group, string fristName, string lastName, Date &dates, Address &add) : Teacher(TeacherID, faculty, fristName, lastName, dates, add), Student(studentID, group, fristName, lastName, dates, add), Person(fristName, lastName, dates, add)
    {

        this->salary = salary;
        this->certificate_id = certificate_id;
    }

    ~TeachingAssistant()
    {
        cout << "bye TeachingAssisyant" << endl;
    }

    void setTeachingAssistant(string salary, string certificate_id)
    {
        this->salary = salary;
        this->certificate_id = certificate_id;
    }

    string getSalary()
    {
        return this->salary;
    }

    string getCertificate_id()
    {
        return this->certificate_id;
    }

    void printTeachingAssistant()
    {
        Person::show();
        cout << "ID : " << getStudentID() << " Group : " << getGroup() << endl;
        cout << "TeacherID :" << getTeacherID() << " Faculty : " << getFaculty() << endl;
        cout << "Salary : " << salary << "bath Certificate_id : " << certificate_id << endl;
    }
};

int main()
{
    // cout << "Student" << endl;
    // Student s1("B20DCCN001", "Comsic", "Nulgan", "tens", Date(1, 1, 2000), Address("123/52", "Hanoi", "99999"));
    // s1.printStudent();
    // cout << endl;

    // cout << "Teacher" << endl;
    // Teacher t1("T202GFW215", "COS", "Rainy", "mars", Date(2, 5, 1980), Address("412/12", "bangkok", "10170"));
    // t1.printTeacher();

    cout << "TeachingAssistant" << endl;
    Date dates(12, 4, 1990);
    Address add("123/52", "bangkok", "10520");
    TeachingAssistant ta1("30000", "COS", "T202GFW215", "COS", "B20DCCN001", "Comsic", "rakdee", "makmak", dates, add);
    ta1.printTeachingAssistant();

    return 0;
};
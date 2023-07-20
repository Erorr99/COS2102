// สร้าง class point ประกอบไปด้วย จุดโคออดิเนต (x,y) และ ชื่อจุด (name) 
// function set ในการกำหนดค่า และ function show ในการแสดงค่า
//สร้าง name เป็น string และ name2 เป็น char array โดยใช้ string copy และใช้ function getName1 และ getName2 ในการแสดงชื่อจุด
//name1 x=2 y=3 , name2 x=4 y=2

#include "iostream"
#include "string"
#include "cstring"

using namespace std;

class Point
{
private:
    int x, y;
    string name;

public:

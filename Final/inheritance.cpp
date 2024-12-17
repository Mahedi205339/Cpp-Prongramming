#include <iostream>
#include <conio.h>
using namespace std;

// Base class
class Person
{
 
public:
    string name;
    int age;

    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
};

class Student : public Person{
    public:
    int id;
    void display2(){
        cout<<"Id : "<<id<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
};

int main()
{
    Student s1;
    s1.id = 234;
    s1.name ="Mahedi";
    s1.display2();

    return 0;
}
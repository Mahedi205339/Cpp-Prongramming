#include <iostream>
#include <conio.h>
using namespace std;

class Person
{
public:
    void display()
    {
        cout << "I am a person" << endl;
    }
};

class Student : public Person
{
    public:
    void display()
    {
        cout << "I am a student" << endl;
    }
};
class Teacher : public Person
{
   public:
    void display()
    {
        cout << "I am a teacher" << endl;
    }
};

int main()
{
    Student s;
    s.display();
    Teacher t;
    t.display();
}

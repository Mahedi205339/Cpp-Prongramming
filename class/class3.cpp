#include<iostream>
using namespace std;

class Gambit 
{

    public:
    Gambit(){
        cout<<"Hello there i'm the constructor"<<endl;
    }
    ~Gambit(){
         cout<<"Hello there i'm the destructor"<<endl;
    }

    void display(){
        cout<<"Hello!"<<endl;
    }
};

int main (){
    Gambit gam;
    gam.display();
    return 0;
}
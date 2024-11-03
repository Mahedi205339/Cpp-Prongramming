#include <iostream>
#include<cstdlib>


using namespace std;
void mainMenu();
void menuOne();


void mainMenu(){
    int selectedMenu;
    bool exitMenu=false;
    system("cls");

    cout << "\n 1.Login \t 2.Register \t 3.Exit \n" << endl;
    cout << "Select Menu:";
    cin>>selectedMenu;

    while(!exitMenu){

        switch(selectedMenu){
        case 1:
            menuOne();
            exitMenu=true;
             break;
        default:
            cout<<"Input Invalied";

        }
    }


}

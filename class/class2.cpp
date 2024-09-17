#include <iostream>
#include<string>

using namespace std;

class Billboard
{
private:
    string title;

public:
    Billboard(string b){
        setTitle(b);
    }


    void setTitle(string a)
    {
        title = a;
    }

    string getTitle(){
        return title;
    }
};

int main()
{

    Billboard bill;
    bill.setTitle("top 5 songs of 2024 ");
    // string title;
    // cin>>title ;
    bill.setTitle(title);
    cout << bill.getTitle();

    return 0;
}

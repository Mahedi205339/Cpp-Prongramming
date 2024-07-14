#include <bits/stdc++.h>
using namespace std;

class Book
{

private:
    string title;
    string arthur;
    int publishYear;

public:
    void data(string t, string a, int pY)
    {
        title = t;
        arthur = a;
        publishYear = pY;
    }

    void showData()
    {
        cout << title << endl
             << arthur << endl
             << publishYear << endl;
    }
};

int main()
{
    string t;
    string a;
    int pY;

    Book b1;
    b1.data("hello today", "Gorge William", 2020);
    b1.showData();
    Book b2;
    cin >> t;
    cin >> a;
    cin >> pY;
    b2.data(t, a, pY);
    b2.showData();
    return 0;
}

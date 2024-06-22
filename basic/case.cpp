#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    char character;

    cout << "Enter any letter : ";
    cin >> character;
    char ch = tolower(character);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        cout << "Vowel";
    }
    else
    {
        cout << "Consonant";
    }
}
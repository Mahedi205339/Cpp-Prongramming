#include <iostream>
#include <string>
using namespace std;

void permute(string s, string answer)
{
    if (s.length() == 0)
    {
        cout << answer << endl;
        return;
    }

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        string left = s.substr(0, i);
        string right = s.substr(i + 1);
        string result = left + right;
        permute(result, answer + ch);
    }
}

int main()
{
    string s = "ABC";
    string answer = "";
    permute(s, answer);
    return 0;
}
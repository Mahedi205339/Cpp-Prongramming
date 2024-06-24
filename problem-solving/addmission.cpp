/*
C++ Program to find the eligibility of admission for an engineering courses based on the follow criteria
*/

#include <iostream>
using namespace std;

int main()
{
    int candidateAge;
    cout << "Input the age of the candidate";
    cin >> candidateAge;

    if (candidateAge < 18)
    {
        cout << " Sorry , You are not eligible to caste your vote. ";
        cout << "You would be able to caste your vote after" << 18 - candidateAge << "year";
    }
    else{
        cout<<"Congratulation! You are eligible for casting your vote ";
    }
    

    return 0 ;

}
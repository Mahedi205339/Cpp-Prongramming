#include <bits/stdc++.h>
using namespace std;

string simulateFight(long long h1, long long b1, long long c1, long long h2, long long b2, long long c2) {
    long long t1 = 0, t2 = 0; 
    long long currH1 = h1, currH2 = h2;
    while (true) {
      
        if (currH1 <= 0 && currH2 <= 0) return "DRAW";
        if (currH1 <= 0) return "JAKE PAUL";
        if (currH2 <= 0) return "MIKE TYSON";

        // Calculate damage for this second
        long long damage1 = b1, damage2 = b2;
        if (t1 == 0) damage1 *= 2; 
        if (t2 == 0) damage2 *= 2; 

       
        currH2 -= damage1;
        currH1 -= damage2;

   
        if (t1 > 0) t1--;
        else t1 = c1 - 1; 

        if (t2 > 0) t2--;
        else t2 = c2 - 1; 
    }
}

int main() {

    long long h1, b1, c1, h2, b2, c2;
    cin >> h1 >> b1 >> c1 >> h2 >> b2 >> c2;

// Output the result
    cout << simulateFight(h1, b1, c1, h2, b2, c2) << endl;

    return 0;
}

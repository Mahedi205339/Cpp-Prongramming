#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

void solve() {
    int T;
    cin >> T;
    
    while (T--) {
        char c1, c2;
        cin >> c1 >> c2;
        
        // Correcting the type casting syntax
        int val1 = static_cast<int>(c1);
        int val2 = static_cast<int>(c2);
        
        // Calculate the product of the ASCII values
        int prod = val1 * val2;
        
        // Vector to store divisor pairs
        vector<pair<int, int>> divisors;
        
        // Find divisors of prod
        for (int i = 1; i <= sqrt(prod); i++) {
            if (prod % i == 0) {
                divisors.push_back({i, prod / i}); // Use push_back instead of pushBack
                if (i != prod / i) {
                    divisors.push_back({prod / i, i}); // Use push_back instead of pushBack
                }
            }
        }
        
        // Sort divisors by the row (first element of each pair)
        sort(divisors.begin(), divisors.end());
        
        // Output the result
        for (const auto& p : divisors) {
            cout << p.first << " " << p.second << "\n";
        }
        cout << "\n"; // Blank line after each test case
    }
}

int main() {
    ios::sync_with_stdio(false); // Faster I/O
    cin.tie(nullptr); // Untie cin and cout for faster I/O
    solve();
    return 0;
}

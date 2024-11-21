#include <bits/stdc++.h>

using namespace std;

bool princesReach(const string& hall) {
    bool redKey = false, greenKey = false, blueKey = false;

    for (char ch : hall) {
        if (ch == 'r') redKey = true;
        else if (ch == 'g') greenKey = true;
        else if (ch == 'b') blueKey = true;

        else if (ch == 'R' && !redKey) return false;
        else if (ch == 'G' && !greenKey) return false;
        else if (ch == 'B' && !blueKey) return false;
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    vector<string> results;
    while (n--) {
        string hall;
        cin >> hall;
        results.push_back(princesReach(hall) ? "YES" : "NO");
    }

    for (const string& result : results) {
        cout << result << endl;
    }

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <cstdio>

using namespace std;

void solve() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        
        vector<int> array(N), sortedArray(N);
        for (int i = 0; i < N; i++) {
            cin >> array[i];
            sortedArray[i] = array[i];
        }
        
        sort(sortedArray.begin(), sortedArray.end());
        
        if (array == sortedArray) {

            cout << "0\n0\n";
            continue;
        }
        
        vector<pair<int, int>> swaps;
        int totalCost = 0;

        for (int i = 0; i < N; i++) {
            while (array[i] != sortedArray[i]) {
                int correctPosition = find(array.begin(), array.end(), sortedArray[i]) - array.begin();

                int swapCost = (i + 1) & (correctPosition + 1);

                swap(array[i], array[correctPosition]);
                swaps.emplace_back(i + 1, correctPosition + 1);
                totalCost += swapCost;


                if (swaps.size() > 3 * N) break;
            }
            if (swaps.size() > 3 * N) break;
        }

        cout << totalCost << '\n';
        cout << swaps.size() << '\n';
        for (const auto& swap : swaps) {
            cout << swap.first << " " << swap.second << '\n';
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}

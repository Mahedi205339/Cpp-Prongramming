#include <iostream>

using namespace std;

int main() {

    int T;
    cin >> T;
    for (int t = 1; t <= T; ++t) {
        int N, K;
        cin >> N >> K;
        
        int totalRings = 0;
        
        for (int i = 0; i < N; ++i) {
            int X, Y;
            cin >> X >> Y;
            

            int rings = (K + X - 1) / X; 
            totalRings += rings;
        }
        
        cout << "Case " << t << ": " << totalRings << endl;
    }
    
    return 0;
}

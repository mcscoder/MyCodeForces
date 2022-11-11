#include <iostream>
#include <vector>
#include <algorithm> // sort
#include <map>
#include <cmath>
#include <cctype>

// #define int long long

using namespace std;

void sol();
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    sol();
}

void sol() {
    int t; cin >> t;
    while(t--) {
        int count = 0;
        for(int i = 0; i < 4; i++) {
            int x; cin >> x;
            if (x == 1) count += 1;
        }
        if (count == 4) cout << 2;
        else if (count == 0) cout << 0;
        else cout << 1;
        cout << endl;
    }
}

#include <iostream>
#include <vector>
#include <algorithm> // sort
#include <map>
#include <cmath>

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
        int n; cin >> n;
        if (n == 3) {
            cout << -1 << endl;
            continue;
        }
        
        for(int i = 3; i < n + 1; i++) {
            cout << i << " ";
        }
        cout << 2 << " " << 1 << endl;
    }
}

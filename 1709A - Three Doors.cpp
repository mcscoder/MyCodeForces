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
        int x; cin >> x;
        int a[4];
        for(int i = 1; i < 4; i++) {
            cin >> a[i];
        }
        
        [&] {
            for(int i = 0; i < 2; i++) {
                x = a[x];
                if (x == 0) {
                    cout << "NO" << endl;
                    return;
                }
            }
            cout << "YES" << endl;
        }();
    }
}

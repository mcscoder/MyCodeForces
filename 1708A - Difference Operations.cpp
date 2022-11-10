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
        vector<int> a(n); for(int &i : a) cin >> i;
        [&] {
            for(int i = 1; i < n; i++) {
                if (a[i] % a[0] != 0) {
                    cout << "NO" << endl;
                    return;
                }
            }
            cout << "YES" << endl;
        }();
    }
}

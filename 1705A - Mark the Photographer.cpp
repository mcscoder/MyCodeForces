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
        int n, x; cin >> n >> x;
        vector<int> a(2*n); for(int &i : a) cin >> i;
        sort(a.begin(), a.end());
        [&] {
            for(int i = 0; i < n; i++) {
                if (a[n + i] - a[i] < x) {
                    cout << "NO" << endl;
                    return;
                }
            }
            cout << "YES" << endl;
        }();
    }
}

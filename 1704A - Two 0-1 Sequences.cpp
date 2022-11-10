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
        int n, m; cin >> n >> m;
        string s1, s2; cin >> s1 >> s2;
        [&] {
            for(int i = 0; i < m; i++) {
                if (s1[n - i] != s2[m - i]) {
                    cout << "NO" << endl;
                    return;
                }
            }
            for(int i = 0; i < n - m + 1; i++) {
                if (s1[i] == s2[0]) {
                    cout << "YES" << endl;
                    return;
                }
            }
            cout << "NO" << endl;
        }();
    }
}

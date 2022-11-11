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
        for(int i = 0; i < n; i++) {
            int b; cin >> b;
            string s; cin >> s;
            for(char ch : s) {
                if (ch == 'U') {
                    a[i] -= 1;
                } else a[i] += 1;
            }
            if (a[i] < 0) {
                a[i] = (10 - abs(a[i]) % 10) % 10;
            } else a[i] = abs(a[i]) % 10;
        }
        for(int i : a) cout << i << " ";
        cout << endl;
    }
}

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
        int n; cin >> n;
        cout << 2 << endl;
        vector<bool> a(n + 1, true);
        vector<int> perm;
        for(int i = 1; 2*i < n + 1; i++) {
            if (a[i]) {
                a[i] = false;
                perm.push_back(i);
            }
            int j = i;
            while(2*j <= n && a[2*j]) {
                a[2*j] = false;
                perm.push_back(2*j);
                j *= 2;
            }
        }
        for(int i = 1; i < n + 1; i++) {
            if (a[i]) perm.push_back(i);
        }

        for(int i = 0; i < n; i++) {
            cout << perm[i] << " ";
        }
        cout << endl;
    }
}

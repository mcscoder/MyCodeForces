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
        int n, k; cin >> n >> k;
        map<int, int> mp;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]] = i;
        }
        sort(a.begin(), a.end());

        int count = 0;
        for(int i = 0; i < k; i++) {
            if (mp[a[i]] >= k) count += 1;
        }
        cout << count << endl;
    }
}

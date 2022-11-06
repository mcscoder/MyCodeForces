#include <iostream>
#include <vector>
#include <algorithm>

#define int long long

using namespace std;

void sol();
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();
    return 0;
}

void sol() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n); for(int &i : a) cin >> i;
        sort(a.begin(), a.end());
        int s1 = 0, s2 = 0;

        for(int i = 0; i < n; i++) {
            if (a[i] < 0) s1 += a[i];
            else s2 += a[i];
        }
        cout << abs(abs(s1) - abs(s2)) << endl;
    }
}

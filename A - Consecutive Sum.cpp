#include <iostream>
#include <algorithm>

#define int long long

using namespace std;

int32_t main() {
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        int a[n]; for(int &i : a) cin >> i;
        int res = 0;
        for(int i = 0; i < k; i++) {
            int maxi = 0;
            for(int j = i; j < n; j += k) {
                maxi = max(maxi, a[j]);
            }
            res += maxi;
        }
        cout << res << endl;
    }
}

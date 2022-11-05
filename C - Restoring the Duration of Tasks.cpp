#include <iostream>
#include <algorithm>

#define int long long

using namespace std;

int32_t main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int s[n]; for(int &i : s) cin >> i;
        int e[n]; for(int &i : e) cin >> i;
        
        cout << e[0] - s[0] << " ";
        for(int i = 1; i < n; i++) {
            cout << e[i] - max(s[i], e[i - 1]) << " ";
        } cout << endl;
    }
}

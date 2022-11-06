#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

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
        vector<int> a(n);
        a[0] = 1; a[n - 1] = 2;
        for(int i = 1; i < n - 1; i++) {
            a[i] = i + 2;
        }
        for(int i : a) cout << i << " ";
        cout << endl;
    }
}

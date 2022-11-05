#include <iostream>
#include <map>
#include <algorithm>

#define int long long

using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int res = n;
        for(int i = 2; i <= 3; i++) res += (n / i) * 2;
        cout << res << endl;
    }
    return 0;
}

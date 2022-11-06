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
        vector<int> a(n); for(int &i : a) cin >> i;
        string s; cin >> s;
        map<int, char> m;
        [&] {
            for(int i = 0; i < n; i++) {
                if (m[a[i]] == 0) {
                    m[a[i]] = s[i];
                    continue;
                }

                if (m[a[i]] != s[i]) {
                    cout << "NO" << endl;
                    return;
                }
            }
            cout << "YES" << endl;
        }();
    }

}

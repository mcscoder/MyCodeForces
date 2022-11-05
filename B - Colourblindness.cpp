#include <iostream>

#define int long long

using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string u, v; cin >> u >> v;
        [&] {
            for(int i = 0; i < n; i++) {
                if (u[i] == 'R') {
                    if (v[i] != 'R') {
                        cout << "NO" << endl;
                        return;
                    }
                } else {
                    if (v[i] == 'R') {
                        cout << "NO" << endl;
                        return;
                    }
                }
            }
            cout << "YES" << endl;
        }();
    }

}

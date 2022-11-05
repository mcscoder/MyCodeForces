#include <iostream>
#include <algorithm>

#define int long long

using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        int c = k % 4;
            
        if (c == 0) {
            cout << "NO" << endl;
        }
        else if (c == 1) {
            cout << "YES" << endl;
            for(int i = 1; i <= n; i += 2) {
                cout << i << " " << i + 1 << endl;
            }
        }
        else if (c == 2) {
            cout << "YES" << endl;
            for(int i = 4; i <= n; i += 4) {
                cout << i - 1 << " " << i << endl;
            }
            for(int i = 2; i <= n; i += 4) {
                cout << i << " " << i - 1 << endl;
            }
        }
        else if (c == 3) {
            cout << "YES" << endl;
            for(int i = 1; i <= n; i += 2) {
                cout << i << " " << i + 1 << endl;
            }
        }
    }

    return 0;
}

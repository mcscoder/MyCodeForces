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
        int n, q; cin >> n >> q;
        int sum = 0;
        int oddCount = 0, evenCount = 0;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            sum += x;
            if (x % 2 == 0) evenCount += 1;
            else oddCount += 1;
        }
        
        // odd = true; even = false;
        // odd = 1; even = 0;
        bool check = true;
        while (q--) {
            int type, x; cin >> type >> x;
            if (type == 0) sum += x * evenCount;
            else sum += x * oddCount;
            cout << sum << endl;
            
            if (x % 2 == 1) {
                if (type == 0) check = true;
                else check = false;
                break;
            }
        }
        for(q; q > 0; q--) {
            int type, x; cin >> type >> x;
            if (type == check) {
                sum += x * n;

                if (x % 2 == 1) {
                    if (type == 0) check = true;
                    else check = false; 
                }
            }
            cout << sum << endl;
        }
    }
}

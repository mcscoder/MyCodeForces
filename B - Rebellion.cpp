#include <iostream>
#include <algorithm>
#include <vector>

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
        int count = 0;
        int l = 0, r = n - 1;
        while (l < r) {
            if (a[r] == 0) {
                if (a[l] == 1) {
                    count += 1;
                    l += 1;
                    r -= 1;
                }
                else l += 1;
                continue;
            }
            r -= 1;
        }
        cout << count << endl;
    }
}

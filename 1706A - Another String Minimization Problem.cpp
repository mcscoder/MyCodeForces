#include <iostream>
#include <vector>
#include <algorithm> // sort
#include <map>
#include <cmath>

// #define int long long

using namespace std;

void sol();
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    sol();
}

void sol() {
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        vector<char> ch(m + 1, 'B');
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            int p = min(x, m - x + 1);
            if (ch[p] == 'B') {
                ch[p] = 'A';
                continue;
            }
            if (ch[x] == 'B') ch[x] = 'A';
            else ch[m - x + 1] = 'A';
        }
        for(int i = 1; i < m + 1; i++) {
            cout << ch[i];
        }
        cout << endl;
    }
}

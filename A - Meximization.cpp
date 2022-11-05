#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        map<int, int> m;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            m[x]++;
        }
        for(auto &p : m) {
            cout << p.first << " ";
            p.second--;
        }
        for(auto &p : m) {
            for(int i = 0; i < p.second; i++) cout << p.first << " ";
        }
    }
}

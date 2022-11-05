#include <iostream>
#include <vector>
#include <algorithm> // sort

#define int long long

using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n], b[n];
        for(int &i : a) cin >> i;
        for(int &i : b) cin >> i;
        vector<vector<int>> v(2);
        for(int i = 0; i < n; i++) v[a[i]].push_back(b[i]);
        sort(v[0].begin(), v[0].end()); sort(v[1].begin(), v[1].end());

        int res = 0;
        if (v[0].size() == v[1].size())
            res = res - min(v[0].front(), v[1].front());
        while (!v[0].empty() && !v[1].empty()) {
            res += (v[0].back() + v[1].back()) * 2;
            v[0].pop_back();
            v[1].pop_back();
        }
        for(int i : v[0]) res += i;
        for(int i : v[1]) res += i;
        cout << res << endl;
    }
    
    return 0;
}

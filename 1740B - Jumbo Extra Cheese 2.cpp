#include <iostream>
#include <vector>
#include <algorithm> // sort
#include <map>
#include <cmath>

#define int long long

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
        int n; cin >> n;
        vector<pair<int, int>> a(n + 1);
        for(int i = 1; i < n + 1; i++) {
            int x, y; cin >> x >> y;
            a[i].first = max(x, y);
            a[i].second = min(x, y);
        }
        sort(a.begin(), a.end());
        a[0] = a[1];
        
        int left = a[1].first, right = a.back().first;
        int top = 0, bot = 0;
        for(int i = 1; i < n + 1; i++) {
            bot += a[i].second;
            top += a[i].second + a[i].first - a[i - 1].first;
        }
        cout << left + right + bot + top << endl;
    }
}

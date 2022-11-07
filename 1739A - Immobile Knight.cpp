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
        cout << min(n, 2) << " " << min(m, 2) << endl;
    }
}

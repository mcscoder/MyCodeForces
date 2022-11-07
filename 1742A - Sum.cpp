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
    while (t--) {
        vector<int> a(3); for(int &i : a) cin >> i;
        sort(a.begin(), a.end());
        if (a[0] + a[1] == a[2]) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}

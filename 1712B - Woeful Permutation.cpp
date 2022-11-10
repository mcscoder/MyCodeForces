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
        int n; cin >> n;
        vector<int> a(n + 1); a[1] = 1;
        for(int i = n % 2 + 1; i < n; i += 2) {
            a[i] = i + 1;
            a[i + 1] = i;
        }
        for(int i = 1; i < n + 1; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}

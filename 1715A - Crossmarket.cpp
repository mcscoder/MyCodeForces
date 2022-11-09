#include <iostream>
#include <vector>
#include <algorithm> // sort
#include <map>
#include <cmath>

// #define int long long

using namespace std;

void print();
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
        if (n < m) {
            int temp = n;
            n = m;
            m = temp;
        }
        if (n == 1) {
            cout << 0 << endl;
            continue;
        }
        cout << n + (m - 1) * 2 << endl;
    }
}

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
        if (n % 2 == 0) {
            for(int i = n - 2; i >= 1; i--) {
                cout << i << " ";
            }
            cout << n - 1 << " " << n << endl;
        } else {
            cout << 1 << " ";
            for(int i = 3; i <= n - 2; i += 2) {
                cout << i << " " << i - 1 << " ";
            }
            cout << n - 1 << " " << n << endl;
        }
    }
}

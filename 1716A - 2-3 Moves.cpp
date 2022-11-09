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
        int n; cin >> n;
        if (n >= 3) {
            if (n % 3 == 0) cout << n / 3;
            else cout << n / 3 + 1;
        }
        else if (n == 1) cout << 2;
        else if (n == 2) cout << 1;
        cout << endl;
    }
}

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
        int left = 0, right = 0, up = 0, down = 0;

        for(int i = 0; i < n; i++) {
            int x, y; cin >> x >> y;
            if (x < 0) {
                left = max(left, abs(x));
            } else right = max(right, x);
            if (y < 0) {
                down = max(down, abs(y));
            } else up = max(up, abs(y));
        }
        int sum = (left + right + up + down)*2;
        cout << sum << endl;
    }
}

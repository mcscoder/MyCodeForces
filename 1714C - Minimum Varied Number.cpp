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
        string s = "";
        for(int i = 9; i >= 1; i--) {
            if (n - i >= 0) {
                s += i + '0';
                n -= i;
            }
        }
        s = string(s.rbegin(), s.rend());
        cout << s << endl;
    }
}

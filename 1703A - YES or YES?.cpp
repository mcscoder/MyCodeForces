#include <iostream>
#include <vector>
#include <algorithm> // sort
#include <map>
#include <cmath>
#include <cctype>

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
        string s; cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        if (s == "yes") {
            cout << "YES";
        } else cout << "NO";
        cout << endl;
    }
}

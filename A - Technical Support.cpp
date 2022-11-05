#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void sol();
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();
    return 0;
}

bool check(int n, string s) {
    int q = 0, a = 0;
    for(int i = n - 1; i >= 0; i--) {
        if (s[i] == 'Q') {
            q += 1;
            if (q > a) return false;
        } else a += 1;
    }
    return true;
}

void sol() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        if (check(n, s)) {
            cout << "YES";
        } else cout << "NO";
        cout << endl;
    }
}

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

void sol() {
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<bool> row(n + 1, true);
        vector<bool> col(n + 1, true);
        for(int i = 0; i < m; i++) {
            int r, c; cin >> r >> c;
        }
        if (n == m) cout << "NO";
        else cout << "YES";
        cout << endl;
    }
}

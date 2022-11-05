#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

void sol();
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    sol();
    return 0;
}

void sol() {
    int n, d; cin >> n >> d;
    string s; cin >> s;
    vector<int> a(n, -1); a[0] = 0;
    queue<int> qe; qe.push(0);
    
    while (!qe.empty()) {
        int u = qe.back(); qe.pop();
        for(int i = 1; i < d + 1; i++) {
            int v = min(u + i, n - 1);
            if (s[v] == '1' && a[v] < 0) {
                a[v] = a[u] + 1;
                qe.push(v);
            }
        }
    }
    cout << a.back();

}

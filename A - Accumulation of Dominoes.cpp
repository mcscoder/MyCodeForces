#include <iostream>

#define int long long

using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m; cin >> n >> m;
    if (m == 1) cout << n - 1;
    else cout << n * (m - 1);   

    return 0;
}

#include <iostream>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n, c; cin >> n >> c;
        map<int, int> m;
        while (n--) {
            int i; cin >> i;
            m[i]++;
        }
        int res = 0;
        for(pair<int, int> p : m) {
            res += min(p.second, c);
        }
        cout << res << endl;
    }
    return 0;
}

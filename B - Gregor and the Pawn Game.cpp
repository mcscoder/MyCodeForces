#include <iostream>
#include <vector>
#include <algorithm> // sort
#include <map>

#define int long long

using namespace std;

void sol();
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    sol();
}

void sol() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s1, s2; cin >> s1 >> s2;
        vector<bool> a(n + 1, true);
        int count = 0;
        for(int i = 0; i < n; i++) {
            if (s1[i] == '0') {
                if (s2[i] == '1' && a[i]) {
                    count += 1;
                    a[i] = false;
                }
                continue;
            }
            if (s2[i - 1] == '1' && a[i - 1]) {
                count += 1;
                a[i - 1] = false;
                continue;
            }
            if (s2[i + 1] == '1' && a[i + 1]) {
                count += 1;
                a[i + 1] = false;
                continue;
            }
        }
        cout << count << endl;  
    }
}

#include <iostream>

using namespace std;

void sol();
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    sol();
}
void sol() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s1, s2; cin >> s1 >> s2;
        [&] {
            for(int i = 1; i < n; i++) {
                if (s1[i] == '1' && s2[i] == '1') {
                    cout << "NO" << endl;
                    return;
                }
            }
            cout << "YES" << endl;
        }();
    }
}

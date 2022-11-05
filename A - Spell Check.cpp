#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string c = "Timru";
        string s; cin >> s;
        [&] {
            if (s.size() == 5) {
                sort(s.begin(), s.end());
                if (s == c) {
                    cout << "YES" << endl;
                    return;
                }
            }
            cout << "NO" << endl;
        }();
    }
}

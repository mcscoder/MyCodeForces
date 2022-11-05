#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q; cin >> q;
    while (q--) {
        int n; cin >> n;
        string s; cin >> s;
        s = string(s.rbegin(), s.rend());
        string res = "";
        for(int i = 0; i < n; i++) {
            string ch = "";
            if (s[i] != '0') ch += s[i];
            else {
                ch += s[i + 2];
                ch += s[i + 1];
                i += 2;
            }
            res += (char) (stoi(ch) + 96);
        }
        res = string(res.rbegin(), res.rend());
        cout << res << endl;
    }

    return 0;
}

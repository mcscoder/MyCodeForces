#include <iostream>
#include <map>

using namespace std;

int32_t main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        map<char, int> m;
        for(char x : s) m[x]++;
        int i = 0;
        for(i; i < s.size() - 1; i++) {
            m[s[i]]--;
            if (m[s[i]] == 0) break;
        }
        for(i; i < s.size(); i++) {
            cout << s[i];
        }
        cout << endl;
    }

}

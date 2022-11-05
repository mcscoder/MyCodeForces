#include <iostream>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        string s1, s2; cin >> s1 >> s2;
        s1 += s2;
        set<char> s(s1.begin(), s1.end());
        cout << s.size() - 1 << endl;
    }
}

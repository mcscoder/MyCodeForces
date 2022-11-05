#include <iostream>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<char, int> m;
    m['S'] = 1;
    m['M'] = 2;
    m['L'] = 3;
    int t; cin >> t;
    while (t--) {
        string s1, s2; cin >> s1 >> s2;


        if (s1.back() == s2.back()) {
            if (s1.back() == 'S') {
                if (s1.size() > s2.size()) cout << "<";
                else if (s1.size() < s2.size()) cout << ">";
                else cout << "=";
            } else {
                if (s1.size() > s2.size()) cout << ">";
                else if (s1.size() < s2.size()) cout << "<";
                else cout << "=";
            }
        } else {
            if (m[s1.back()] < m[s2.back()]) cout << "<";
            else if (m[s1.back()] > m[s2.back()]) cout << ">";
            else cout << "=";
        }
        cout << endl;
    }
}

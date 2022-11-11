#include <iostream>
#include <vector>
#include <algorithm> // sort
#include <map>
#include <cmath>
#include <cctype>

// #define int long long

using namespace std;

void sol();
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    sol();
}

void sol() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int day = 0;
        
        int i = 0;
        while(i < s.size()) {
            map<char, bool> d;
            int maxMem = 0;
            day += 1;
            while((i < s.size() && maxMem != 3) || d[s[i]]) {
                if (d[s[i]] == false) {
                    d[s[i]] = true;
                    maxMem += 1;
                }
                i += 1;
            }
            maxMem = 0;
        }
        cout << day << endl;
    }
}

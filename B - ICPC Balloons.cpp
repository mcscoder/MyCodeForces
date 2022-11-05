#include <iostream>
#include <map>
 
using namespace std;
 
struct Node {
    int value = 1;
};
 
int32_t main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        map<char, Node> m;
        
        int res = 0;
        for(char ch : s) {
            res += m[ch].value + 1;
            m[ch].value = 0;
        }
        cout << res << endl;
    }
}

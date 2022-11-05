#include <iostream>
#include <map>

using namespace std;

int32_t main() {
    int t; cin >> t;
    while (t--) {
        map<int, int> m;
        int n; cin >> n;
        int a[n]; 
        for(int &i : a) {
            cin >> i;
            m[i]++;
        }
        int count = 0;
        for(pair<int, int> p : m) count += p.second - 1;

        int move = 0;
        for(int i : a) {
            if (count == 0) break;
            if (m[i] != 1) {
                count--;
            }
            m[i]--;
            move++;
        }
        cout << move << endl;
    }
}

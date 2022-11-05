#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int index, mx = 0;
        for(int i = 0; i < n; i++) {
            int c; cin >> c;
            if (c > mx) {
                index = i + 1;
                mx = c;
            }
        }
        cout << index << endl;
    }
    
    return 0;
}

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        int a, b, c; cin >> a >> b >> c;
        a--;
        b = abs(b - c) + c - 1; 
        if (a < b) cout << 1;
        else if (a > b) cout << 2;
        else cout << 3;
        cout << endl;
    }

    return 0;
}

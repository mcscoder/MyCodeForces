#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void sol();
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();
    return 0;
}

void sol() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        if (n % 2 == 0) {
            cout << n / 2 + 1 << " ";
            for(int i = 1; i < n / 2; i++) {
                cout << i << " " << i + n / 2 + 1 << " ";
            }
            cout << n / 2;
        } else {
            for(int i = 1; i < n / 2 + 1; i++) {
                cout << i << " " << i + n / 2 + 1 << " ";
            }
            cout << n / 2 + 1;
        }
        cout << endl;
    }

}

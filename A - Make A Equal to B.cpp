#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n]; 
        int c1 = 0;
        int c2 = 0;
        for(int &i : a) {
            cin >> i;
            if (i == 1) c1++;
        }
        int count = 0;
        for(int i : a) {
            int j; cin >> j;
            if (j == 1) c2++;
            if (i != j) count++;
        }
        cout << min(count, abs(c1 - c2) + 1) << endl;
    }

}

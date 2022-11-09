#include <iostream>
#include <vector>
#include <algorithm> // sort
#include <map>
#include <cmath>

// #define int long long

using namespace std;

void print();
void sol();
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    sol();
}

void sol() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        cout << n << endl;
        vector<int> a(n + 1);
        for(int i = 1; i < n + 1; i++) {
            cout << i << " ";
            a[i] = i;
        }
        cout << endl;
        for(int i = 1; i < n; i++) {
            int c = a[i];
            a[i] = a[i + 1];
            a[i + 1] = c;           
            for(int i = 1; i < n + 1; i++) cout << a[i] << " ";
            cout << endl;
        }
    }
}

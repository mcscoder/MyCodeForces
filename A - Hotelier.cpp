#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int n; cin >> n;
    string s; cin >> s;
    vector<int> a(10, 0);
    for(char ch : s) {
        if (ch == 'L') {
            int i = 0;
            while (a[i] == 1) i++;
            a[i] = 1;
        } else if (ch == 'R') {
            int i = 10 - 1;
            while (a[i] == 1) i--;
            a[i] = 1;
        } else {
            a[ch - '0'] = 0;
        }
    }
    for(int i : a) cout << i;
}

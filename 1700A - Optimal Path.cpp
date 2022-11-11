#include <iostream>
#include <vector>
#include <algorithm> // sort
#include <map>
#include <cmath>
#include <cctype>

#define int long long

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
        int n, m; cin >> n >> m;
        // https://topnoibat.com/cong-thuc-tinh-tong-day-so-cach-deu-va-khong-cach-deu/
        int cost = (m*(m - 1))/2 + ((m*n + m)*n)/2;
        cout << cost << endl;
    }
}

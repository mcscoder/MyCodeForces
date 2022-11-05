#include <iostream>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int n = s.back() - '0';
        cin >> s;
        n += s.back() - '0';
        if (n % 2 == 0) cout << "Tonya" << endl;
        else cout << "Burenka" << endl;
    }   
}

#include <iostream>
#include <map>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string p1[n], p2[n], p3[n];
        map<string, int> m;
        for(int i = 0; i < n; i++) {
            cin >> p1[i];
            m[p1[i]]++;
        }
        for(int i = 0; i < n; i++) {
            cin >> p2[i];
            m[p2[i]]++;
        }
        for(int i = 0; i < n; i++) {
            cin >> p3[i];
            m[p3[i]]++;
        }
        
        int score1, score2, score3;
        score1 = score2 = score3 = 0;
        for(string s : p1) {
            if (m[s] == 1) {
                score1 += 3;
            } else if (m[s] == 2) {
                score1 += 1;
            }
        }
        for(string s : p2) {
            if (m[s] == 1) {
                score2 += 3;
            } else if (m[s] == 2) {
                score2 += 1;
            }
        }
        for(string s : p3) {
            if (m[s] == 1) {
                score3 += 3;
            } else if (m[s] == 2) {
                score3 += 1;
            }
        }
        cout << score1 << " " << score2 << " " << score3;    
        cout << endl;
    
    }
    return 0;
}

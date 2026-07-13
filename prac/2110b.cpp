#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
        string s;
        cin >> s;

        int balance = 0;
        bool canBreak = false;

        for (int i = 0; i < (int)s.length() - 1; i++) {
            if (s[i] == '(') {
                balance++;
            } else {
                balance--;
            }

            if (balance == 0) {
                canBreak = true;
                break;
            }
        }

        if (canBreak) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
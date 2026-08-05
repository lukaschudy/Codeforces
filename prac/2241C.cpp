#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        int changes = 0;

        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1]) {
                changes++;
            }
        }

        if (changes == 1) {
            cout << 2 << '\n';
        } else {
            cout << 1 << '\n';
        }
    }

    return 0;
}
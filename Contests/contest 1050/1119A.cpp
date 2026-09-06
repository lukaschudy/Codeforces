#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while(t--){
        int n, k; cin >> n >> k;
        int farms = n/k;
        
        string s;
        cin >> s;

        int answer = 0;

        for (int start = 0; start < n; start += k) {
            bool hasFreeField = false;

        for (int i = start; i < start + k; i++) {
            if (s[i] == '0') {
                hasFreeField = true;
            }
        }

        if (!hasFreeField) {
            answer++;
        }
        }

        cout << answer << '\n';
    }

    return 0;
}
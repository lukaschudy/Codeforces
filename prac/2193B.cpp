#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> p(n);
        for (auto& x : p) cin >> x;
        vector<int> suf(n);
        suf[n-1] = n-1;
        for (int i = n-2; i >= 0; i--)
            suf[i] = p[i] > p[suf[i+1]] ? i : suf[i+1];
        int l = 0;
        while (l < n && suf[l] == l) l++;
        if (l < n) reverse(p.begin() + l, p.begin() + suf[l] + 1);
        
        for (int i = 0; i < n; i++)
            cout << p[i] << " \n"[i == n-1];
    }
}
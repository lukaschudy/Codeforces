#include <bits/stdc++.h>
using namespace std;

int oddPart(int x) {
    while (x % 2 == 0) x /= 2;
    return x;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        
        bool ok = true;
        for (int i = 0; i < n; i++) {
            if (oddPart(i + 1) != oddPart(a[i])) {
                ok = false;
                break;
            }
        }
        
        cout << (ok ? "YES" : "NO") << endl;
    }
    
    return 0;
}
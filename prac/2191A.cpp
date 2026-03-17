#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        
        bool allSame = true;
        int firstParity = (1 + a[0]) % 2;
        
        for (int i = 0; i < n; i++) {
            if ((i + 1 + a[i]) % 2 != firstParity) {
                allSame = false;
                break;
            }
        }
        
        cout << (allSame ? "YES" : "NO") << "\n";
    }
    
    return 0;
}
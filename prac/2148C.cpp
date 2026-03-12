#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        long long n, m;
        cin >> n >> m;
        
        long long ans = 0;
        long long prev_a = 0, prev_b = 0;
        
        for (int i = 0; i < n; i++) {
            long long a, b;
            cin >> a >> b;
            
            long long gap = a - prev_a;
            long long need_parity = (b ^ prev_b);
            
            if (gap % 2 == need_parity)
                ans += gap;
            else
                ans += gap - 1;
            
            prev_a = a;
            prev_b = b;
        }
        
        ans += m - prev_a;
        
        cout << ans << "\n";
    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        long long a, b;
        cin >> a >> b;
        
        int ans = 0;
        long long sum_odd = 0, sum_even = 0;
        
        for (int layer = 1; layer <= 60; layer++) {
            long long size = 1LL << (layer - 1);
            if (size < 0) break;
            
            if (layer % 2 == 1) sum_odd += size;
            else sum_even += size;
            if ((a >= sum_odd && b >= sum_even) || (a >= sum_even && b >= sum_odd)) {
                ans = layer;
            } else {
                break;
            }
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        long long r, x, d, n;
        cin >> r >> x >> d >> n;
        string div;
        cin >> div;
        long count = 0;
        for (int i = 0; i < n; i++){
            if (div[i] == '1'){
                count++;
                r = max(0LL, r - d);
            }
            else{
                if(r<x){
                    count++;
                    r = max(0LL, r - d);
                }
            }

        }
        cout << count << endl;

    }
    

    return 0;
}
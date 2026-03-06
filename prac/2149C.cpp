#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;

        map<int,int> freq;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            freq[x]++;
        }
        int missing = 0;
        for(int i = 0; i < k; i++)
            if(freq[i] == 0) missing++;

        int cnt_k = freq[k];

        cout << max(missing, cnt_k) << "\n";
    }
    return 0;
}
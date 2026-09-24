#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >>t;
    while(t--){
        int n,k; cin >> n >> k;
        vector<int> a(n);
        for(int &x : a) cin >> x;
        sort(a.begin(),a.end());
        int answer = 0;
        int largestgroup = 1;
        int currentgroup = 1;
        for(int i = 1; i < n; i++){
            if(a[i] - a [i - 1] <= k){
                currentgroup++;
            }else currentgroup = 1;
            largestgroup = max(largestgroup, currentgroup);
        }
        answer = n - largestgroup;
        cout << answer << '\n';
    }
    

    return 0;
}
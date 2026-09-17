#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    int currlen = 1;
    int bestlen = 1;
    for(int i = 1; i < n; i++){
        if(a[i] >= a[i-1]){
            currlen++;
        }else{
            currlen = 1;
        }
        bestlen = max(bestlen, currlen);
    }
    cout << bestlen << '\n';

    return 0;
}
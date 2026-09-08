#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int &x : a) cin >> x;
    
        map<int, int> freq;
        for (int x : a){
            freq[x]++;
        }
        int answer = -1;

        for(auto [value, count] : freq){
            if(count >= 3){
                answer = value;
                break;
            }
        }
        cout << answer << '\n';
    }

    return 0;
}
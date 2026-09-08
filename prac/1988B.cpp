#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        string s;
        cin >> s;

        int ones = 0;
        int groupzero = 0;

        for(int i =0; i< n; i++){
            if(s[i] == '1'){
                ones++;
            }
            if (s[i]== '0' && (i==0 || s[i-1] == '1')){
                groupzero++;
            }
        }
        if(ones > groupzero){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    

    return 0;
}
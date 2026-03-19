#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        string n;
        cin >> n;
        int size = n.size();
        if(size > 10){
            cout << n[0] << size - 2 << n[size-1] << endl;
        }
        else{
            cout << n << endl;
        }
    }
    
    return 0;
}
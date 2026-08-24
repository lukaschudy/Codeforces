#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        vector<int> a(3);
        for (int i =0; i <3;i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int firsttwo = a[0] + a[1];
        int last = a[2];
        int first = a[0];
        if (firsttwo < last){
            cout << firsttwo - first << '\n';
        }
        else if (first == last){
            cout << 0 << '\n';
        }
        else{
            cout << last - first << '\n';
        }
    }
    

    return 0;
}
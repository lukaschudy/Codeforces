#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int &x : a){
            cin >> x;
        }
        int left = -1;
        int bleft = -1, bright = -1;
        int blength =0;
        for (int i =0; i <n; i++){
            if(a[i] == 0){
                continue;
            }
            if(left == -1){
                left = i;
            }
            int length = i - left + 1;

            if(length > blength){
                blength = length;
                bleft = left;
                bright = i;
            }
            if(a[i] == 1){
                left = i;
            }
        }
        for(int &x : a){
            if (x==-1){
                x = 0;
            }
        }
        if(bleft != -1){
            a[bleft] = 1;
            a[bright] = 1;
        }
        for (int i =0; i < n; i++){
            cout << a[i] << (i + 1 == n ? '\n' : ' ');
        }
    }



    return 0;
}
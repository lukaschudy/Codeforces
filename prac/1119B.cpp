#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int odd = 0, divisible4 = 0, reminder = 0;

        for (int i =0; i < n; ++i){
            int x;
            cin >> x;

            if (x%2 ==1){
                ++odd;
            }
            else if(x%4 == 0){
                ++divisible4;
            }
            else ++reminder;
        }
    cout << max({odd, divisible4, reminder}) << '\n';

    }
    

    return 0;
}
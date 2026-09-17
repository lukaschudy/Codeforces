#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,k; cin >> n >> k;
    long long odd = 0;
    long long even = 0;
    if(n%2==0){
        odd = n/2;
        even = n/2;
    }else{
        odd = n/2 + 1;
        even = n/2;
    }
    long long answer = 0;
    long long evenp = 0;
    if(k <= odd){
        answer = 2*k - 1;
    }else{
        evenp = k - odd;
        answer = evenp*2;
    }
    cout << answer;


    return 0;
}
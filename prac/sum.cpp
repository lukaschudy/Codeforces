#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        long a, b, c;
        cin >> a >> b >> c;
        long sum1= a+b;
        long sum2= a+c;
        long sum3= b+c;
        if(sum1 == c || sum2 == b || sum3 == a){
            cout << "YES\n";
        }else if(sum1 != c || sum2 != b || sum3 != a){
            cout << "NO\n";
        }
    }

    return 0;

}
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n, s, x;
        cin >> n >> s >> x;
        int a[n];
        int sum = 0;
        for(int i = 0; i < n; i++){\
            cin >> a[i];
            sum += a[i];
        }
        if (sum == s){
            cout << "YES" << endl;
        }
        else{
            for(int j = 1; j < 100; j++){
                sum += j*x;
                if (sum == s){
                    cout << "YES" << endl;
                    break;
                }
                if (sum > s){
                    cout << "NO" << endl;
                    break;
                }
                sum = 0;
                for(int i = 0; i < n; i++){
                    cin >> a[i];
                    sum += a[i];
                }
            }
        }
            }    
        
    return 0;
}
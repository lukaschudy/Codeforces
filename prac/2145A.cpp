#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            int a;
            cin >> a;
            
            int count = 0;
            int reminder = a%3;
            if(a <= 3){
                count = 3- a;
            }else if (reminder == 1){
                count = 2;
            }else if (reminder == 2){
                count = 1;
            }else{
                count = 0;
            }
            
            cout << count << endl;
        }
    }
    return 0;
}
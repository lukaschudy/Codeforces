#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    int a, b, c, d;
    
    while (t--) {
        cin >> a >> b >> c >> d;
        if (a == b && a == c && a == d){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
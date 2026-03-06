#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            long long a, b, c;
            cin >> a >> b >> c;
            if ( b >= a){
                cout << 1 << "\n";
            }
            else if (c * b <= a){
                cout << 1 << "\n";
            }
            else{
                cout << 2 << "\n";
            }
    }

}
    return 0;
}
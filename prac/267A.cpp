#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            int a, b;
            cin >> a >> b;
            
            int count = 0;
            while (a > 0 && b > 0) {
                if (a > b) {
                    count += a / b;
                    a = a % b;
                } else {
                    count += b / a;
                    b = b % a;
                }
            }
            cout << count << "\n";
        }
    }
    return 0;
}
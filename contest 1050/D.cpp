#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        long long total = 0;
        long long minOdd = LLONG_MAX;
        bool hasOdd = false;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            total += a[i];
            if (a[i] % 2 != 0) {
                hasOdd = true;
                minOdd = min(minOdd, a[i]);
            }
        }

        if (!hasOdd) {
            cout << 0 << "\n";
        } else {
            cout << total + 1 << "\n";
        }
    }
    return 0;
}
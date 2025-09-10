#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        long long s;
        cin >> n >> s;

        vector<long long> x(n);
        for (int i = 0; i < n; ++i) {
            cin >> x[i];
        }

        long long min_x = *min_element(x.begin(), x.end());
        long long max_x = *max_element(x.begin(), x.end());

        long long steps = max(abs(s - min_x), abs(s - max_x)) + (max_x - min_x);
        cout << steps << '\n';
    }

    return 0;
}
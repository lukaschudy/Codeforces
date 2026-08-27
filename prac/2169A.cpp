#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, a; cin >> n >> a;
        vector<int> vec(n);
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }
        int i = 0;

        // Count values strictly smaller than a.
        while (i < n && vec[i] < a) {
            i++;
        }

        int below = i;

        // Skip values equal to a because Bob cannot win them.
        int j = i;

        while (j < n && vec[j] == a) {
            j++;
        }

        // Everything after j is strictly greater than a.
        int above = n - j;

        if (above > below) {
            cout << a + 1 << '\n';
        } else {
            cout << a - 1 << '\n';
        }
    }

    return 0;
}
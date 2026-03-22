#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;

    long long cols = (n + a - 1) / a;  // ceil(n/a)
    long long rows = (m + a - 1) / a;  // ceil(m/a)

    cout << cols * rows << endl;
    return 0;
}
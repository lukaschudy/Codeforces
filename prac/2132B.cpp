#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    
    vector<ll> solutions;
    ll current_power_of_10 = 10;
    
    for (int k = 1; k <= 18; ++k) {
        ll divisor = current_power_of_10 + 1;

        if (n % divisor == 0) {
            solutions.push_back(n / divisor);
        }
        if (n / 10 < current_power_of_10) break; 
        current_power_of_10 *= 10;
    }

    sort(solutions.begin(), solutions.end());
    if (solutions.empty()) {
        cout << 0 << endl;
    } else {
        cout << solutions.size();
        for (ll x : solutions) {
            cout << " " << x;
        }
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    
    return 0;
}
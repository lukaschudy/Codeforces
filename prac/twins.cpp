#include <bits/stdc++.h>
#include <vector>
#include <numeric>
#include <algorithm> 
#include <functional>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> coins(n);
    for (int i = 0; i < n; ++i) {
        cin >> coins[i];
    }

    int total_sum = accumulate(coins.begin(), coins.end(), 0);
    double target_sum = total_sum / 2.0;
    sort(coins.begin(), coins.end(), greater<int>());
    int my_sum = 0;
    int coin_count = 0;

    for (int coin : coins) {
        my_sum += coin;
        coin_count++;

        if (my_sum > target_sum) {
            break;
        }
    }

    cout << coin_count << endl;

    return 0;



}
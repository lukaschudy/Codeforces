#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;

    sort(a.rbegin(), a.rend()); // I sort the array the user inputed

    int sum = 0;
    for (int x : a) sum += x;

    int mysum = 0;
    int coins = 0;
    for (int x : a){
        mysum += x;
        coins++;
        int remaining = sum - mysum;
        if(mysum > sum){
            break;
        }
        
        

    }
    cout << coins << '\n';


    return 0;
}
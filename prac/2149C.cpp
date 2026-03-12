#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--) {
        int n, m;
        cin >> n >> m;
        
        vector<pair<int, int>> req(n);
        for(int i = 0; i < n; i++) {
            cin >> req[i].first >> req[i].second;
        }

        sort(req.begin(), req.end());

        if(req[0].first < abs(req[0].second - 0)) {
            cout << -1 << "\n";
            continue;
        }
        
        int points = 0;
        int curr_side = 0;
        int curr_time = 0;
        bool possible = true;
        
        for(auto& r : req) {
            int target_time = r.first;
            int target_side = r.second;
            int time_available = target_time - curr_time;
            int dist = abs(target_side - curr_side);
            
            if(dist > time_available || (time_available - dist) % 2 != 0) {
                possible = false;
                break;
            }
            
            int extra = time_available - dist;
            points += dist + extra; 
            
            curr_side = target_side;
            curr_time = target_time;
        }
        
        if(possible) {
            cout << points << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
    
    return 0;
}
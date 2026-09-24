#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--){
        vector<string> grid(8);

        for(string& row: grid){
            cin >> row;
        }
        char answer = 'B';
        for(string row : grid){
            if(row == "RRRRRRRR"){
                answer = 'R';
                break;
            }
        }
        cout<< answer << '\n';
    }

    return 0;
}
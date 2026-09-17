#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    int size = s.size();
    bool result = false;
    int seq1 = 0;
    int seq0 = 0;
    for (int i = 0; i < size; i++){

        if(s[i] == '0'){
            seq0++;
            seq1 = 0;
        }else{
            seq1++;
            seq0 = 0;
        } 
        if(seq1 >= 7 || seq0 >=7){
            cout << "YES\n";
            result = true;
            break;
        }
    }
    if(result == false) cout << "NO\n";

    return 0;
}
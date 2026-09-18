#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;

    if(s[0] != '-'){
        cout << s << '\n';
    }else{
        int last = s.size() - 1;
        int secondlast = s.size() - 2;
        if (s[last] > s[secondlast]) {
        s.erase(last, 1);
        } else {
        s.erase(secondlast, 1);
        }

        cout << stoi(s) << '\n';
    }

    

    return 0;
}
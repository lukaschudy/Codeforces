#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int start = 0; 
    while(t--){
        string x;
        cin >> x;
        if (x == "X++" || x == "++X"){
            start = start + 1;
        }else{
            start = start - 1;
        }
    }
    cout << start;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){

    int x;
    int output;
    cin >> x;

    if (x <= 5){
        cout << "1";
    
    }
    if (x%5 == 0 && x > 5){      
        output = x/5;
        cout << output << endl;
    
    }
    if(x%5 != 0 && x > 5){
        output = x/5 + 1;
        cout << output << endl;

    }
    return 0;
}
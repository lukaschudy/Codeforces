#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    int i =1;

    while (i <= t){
        int a, b;
        cin >> a >> b;
        long result;
        if (a%b == 0){
            cout << "0" << endl;
        }else{
            result = b - a%b;
            cout << result << endl;
        }

        i++;
    }
}
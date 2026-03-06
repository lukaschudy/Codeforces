#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    long long pivot_index = -1;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '^') {
            pivot_index = i;
            break;
        }
    }
    
    long long left = 0;
    long long right = 0;
    
    for(int i = 0; i < s.length(); i++) {
        if(s[i] >= '1' && s[i] <= '9') {
            int weight = s[i] - '0';
            long long distance = abs(pivot_index - i);
            
            if(i < pivot_index) {
                left += weight * distance;
            } else {
                right += weight * distance;
            }
        }
    }
    
    if(left > right) cout << "left";
    else if(right > left) cout << "right";
    else cout << "balance";
    
    return 0;
}
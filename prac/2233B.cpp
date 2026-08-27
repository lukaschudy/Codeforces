#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int size = 4 * n;
        vector<int> arr;
        arr.reserve(size);
        int start = 1;
        if (n % 2 == 1) {
            int A = 1;
            int B = 2;
            int C = 3;

            arr.push_back(A);
            arr.push_back(A);
            arr.push_back(B);
            arr.push_back(A);
            arr.push_back(B);
            arr.push_back(C);
            arr.push_back(A);
            arr.push_back(C);
            arr.push_back(B);
            arr.push_back(B);
            arr.push_back(C);
            arr.push_back(C);

            start = 4;
        }

        for (int A = start; A <= n; A += 2) {
            int B = A + 1;

            arr.push_back(A);
            arr.push_back(B);
            arr.push_back(A);
            arr.push_back(A);
            arr.push_back(B);
            arr.push_back(B);
            arr.push_back(A);
            arr.push_back(B);
        }

        for (int value : arr) {
            cout << value << ' ';
        }
        cout << '\n';

    }

    return 0;
}
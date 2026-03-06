#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Group {
    char color;
    long long count;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    if (!(cin >> s)) return 0;
    vector<Group> groups;
    for (char c : s) {
        if (groups.empty() || groups.back().color != c) {
            groups.push_back({c, 1});
        } else {
            groups.back().count++;
        }
    }
    if (groups.size() % 2 == 0) {
        cout << 0 << endl;
        return 0;
    }

    int mid = groups.size() / 2;
    if (groups[mid].count < 2) {
        cout << 0 << endl;
        return 0;
    }
    for (int i = 0; i < mid; ++i) {
        int left = i;
        int right = groups.size() - 1 - i;
        if (groups[left].color != groups[right].color) {
            cout << 0 << endl;
            return 0;
        }
        if (groups[left].count + groups[right].count < 3) {
            cout << 0 << endl;
            return 0;
        }
    }
    cout << groups[mid].count + 1 << endl;

    return 0;
}
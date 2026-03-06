#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int h, m, a;
    char colon;
    if (cin >> h >> colon >> m >> a) {
        int total_minutes = h*60 + m;
        total_minutes += a;

        total_minutes %= 1440;
        int new_h = total_minutes / 60;
        int new_m = total_minutes % 60;

        cout << setfill('0') << setw(2) << new_h << ":" 
             << setfill('0') << setw(2) << new_m << endl;
    }

    return 0;
}
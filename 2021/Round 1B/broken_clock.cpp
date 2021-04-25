#include <bits/stdc++.h>
#include <stdint.h>
using namespace std;

void solve() {
    int64_t a;
    int64_t b;
    int64_t c;
    int64_t hour;
    int64_t minute;
    int64_t second;
    int64_t nanotime;
    int64_t hour_ans;
    int64_t minute_ans;
    int64_t second_ans;
    int64_t nano_ans;
    cin >> a;
    cin >> b;
    cin >> c;

    //ABC
    if ((b - a) % 11 == 0 && (c - b) % 59 == 0) {
        hour = a;
        minute = b;
        second = c;
        cout << "1" << endl;
    }

    //ACB
    else if ((c - a) % 11 == 0 && (b - c) % 59 == 0) {
        hour = a;
        minute = c;
        second = b;
        cout << "2" << endl;

    }

    //BAC
    else if ((a - b) % 11 == 0 && (c - a) % 59 == 0) {
        hour = b;
        minute = a;
        second = c;
        cout << "3" << endl;
    }

    //BCA
    else if ((c - b) % 11 == 0 && (a - c) % 59 == 0) {
        hour = b;
        minute = c;
        second = a;
        cout << "4" << endl;
    }

    //CAB
    else if ((a - c) % 11 == 0 && (b - a) % 59 == 0) {
        hour = c;
        minute = a;
        second = b;
        cout << "5" << endl;
    }

    //CBA
    else if ((b - c) % 11 == 0 && (a - b) % 59 == 0) {
        hour = c;
        minute = b;
        second = a;
        cout << "6" << endl;
    }

    nanotime = hour + ((minute - (12 * hour)) / 11);

    cout << nanotime << endl;

    hour_ans = nanotime / 3600000000000;
    nanotime = nanotime % 3600000000000;
    minute_ans = nanotime / 60000000000;
    nanotime = nanotime % 60000000000;
    second_ans = nanotime / 1000000000;
    nanotime = nanotime % 1000000000;
    nano_ans = nanotime;

    cout << hour_ans << " " << minute_ans << " " << second_ans << " " << nano_ans << endl;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cout << "Case #" << i << ": ";
        solve();
    }
}
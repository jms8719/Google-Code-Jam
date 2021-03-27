#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x;
    int y;
    string mural;
    int cost = 0;
    cin >> x;
    cin >> y;
    cin >> mural;

    mural.erase(remove(mural.begin(), mural.end(), '?'), mural.end());

    if (mural.size() <= 1) {
        cout << 0 << endl;
        return;
    }

    for (int i = 0; i < mural.size() - 1; i++) {
        if (mural[i] == 'C' && mural[i + 1] == 'J') {
            cost += x;
        } else if (mural[i] == 'J' && mural[i + 1] == 'C') {
            cost += y;
        }
    }

    cout << cost << endl;
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
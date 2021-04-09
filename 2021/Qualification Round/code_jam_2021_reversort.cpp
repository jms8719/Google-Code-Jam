#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> myints;
    int cost = 0;
    for (int i = 0; i < n; i++) {
        int l;
        cin >> l;
        myints.push_back(l);
    }

    for (int i = 0; i < n - 1; i++) {
        int min = INT_MAX;
        int index = 0;
        for (int j = i; j < n; j++) {
            if (myints[j] < min) {
                min = myints[j];
                index = j;
            }
        }
        reverse(myints.begin() + i, myints.begin() + index + 1);
        cost += index - i + 1;
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
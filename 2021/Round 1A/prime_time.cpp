#include <bits/stdc++.h>
using namespace std;

void solve() {
    int m;
    int p;
    int n;
    vector<int> primes;
    cin >> m;

    for (int i = 0; i < m; i++) {
        cin >> p;
        cin >> n;

        for int(i = 0; i < n; i++) {
            primes.push_back(p);
        }
    }

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
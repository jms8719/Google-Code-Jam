#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    int c;
    cin >> n;
    cin >> c;
    int sum = 0;
    vector<int> solution;
    vector<int> helper(n - 1, 1);
    int temp = c - n + 1;

    for (int i = 2; i <= n; i++) {
        sum += i;
    }

    if (c > sum || c < n - 1) {
        cout << "IMPOSSIBLE" << endl;
        return;
    }

    for (int i = 0; i < n; i++) {
        solution.push_back(i + 1);
    }

    for (int i = 0; i < n - 1; i++) {
        if (temp > n - i - 1) {
            helper[i] += n - i - 1;
            temp -= n - i - 1;
        } else {
            helper[i] += temp;
            break;
        }
    }

    for (int i = n - 2; i >= 0; i--) {
        reverse(solution.begin() + i, solution.begin() + i + helper[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        cout << solution[i] << " ";
    }
    cout << solution[n - 1] << endl;


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
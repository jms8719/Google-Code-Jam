#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    int k;
    int p;
    vector<int> purchased;
    vector<int> differences;
    int largest;
    int largest_index;
    int second_largest;
    int second_largest_index;
    float answer;
    int possible = 0;

    cin >> n;
    cin >> k;
    for (int i = 0; i < n; i++) {
        cin >> p;
        purchased.push_back(p);
    }

    sort(purchased.begin(), purchased.end());
    purchased.erase( unique( purchased.begin(), purchased.end() ), purchased.end() );

    std::cout << "The vector elements are : ";

    for(int i=0; i < purchased.size(); i++)
    std::cout << purchased.at(i) << ' ';
    cout << endl;
    
    differences.push_back(purchased[0] - 1);
    for (int i = 0; i < purchased.size() - 1; i++) {
        int push_value = 0;
        int difference = purchased[i + 1] - purchased[i];
        push_value = difference / 2;

        differences.push_back(push_value);
    }
    differences.push_back(k - purchased[purchased.size() - 1]);

    std::cout << "The vector elements are : ";

    for(int i=0; i < differences.size(); i++)
    std::cout << differences.at(i) << ' ';
    cout << endl;

    largest_index = max_element(differences.begin(), differences.end()) - differences.begin();
    largest = *max_element(differences.begin(), differences.end());
    differences[largest_index] = 0;
    second_largest_index = max_element(differences.begin(), differences.end()) - differences.begin();
    second_largest = *max_element(differences.begin(), differences.end());

    cout << "largest index and the number: " << largest_index << " " << largest << endl;

    cout << "second largest index and the number: " << second_largest_index << " " << second_largest << endl;

/*
    if (largest >= 2) {
        if (largest % 4 == 0) {
            possible += largest / 2 - 1;
        }
        if (largest % 4 == 1) {
            possible += largest / 2;
        }
        if (largest % 4 == 2) {
            possible += largest / 2;
        }
        if (largest % 4 == 3) {
            possible += largest / 2;
        }
    }

    if (second_largest >= 2) {
        if (second_largest % 4 == 0) {
            possible += second_largest / 2 - 1;
        }
        if (second_largest % 4 == 1) {
            possible += second_largest / 2;
        }
        if (second_largest % 4 == 2) {
            possible += second_largest / 2;
        }
        if (second_largest % 4 == 3) {
            possible += second_largest / 2;
        }
    }
    */

   possible += largest;
   possible += second_largest;


    answer = (float)possible / (float)k;
    
    cout << answer << endl;
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
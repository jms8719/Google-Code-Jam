#include <bits/stdc++.h>
using namespace std;

/*
bool is_power_of_10(int n) {
    long int pow = 1;
    while (pow < n) {
        pow *= 10;
    }

    return (pow == n);
}
*/

int count_digit(int number) {
   int count = 0;
   while(number != 0) {
      number = number / 10;
      count++;
   }
   return count;
}

void solve() {
    int n;
    cin >> n;
    vector<int> input;
    int answer = 0;

    for (int i = 0; i < n; i++) {
        int l;
        cin >> l;
        input.push_back(l);
    }

    for (int i = 0; i < n - 1; i++) {
        if (input[i] == input[i + 1]) {
            input[i + 1] = input[i + 1] * 10;
            answer += 1;
        } else if (input[i] > input[i + 1]) {
            int temp = input[i];
            //int digits = int(log10(input[i + 1]) + 1);
            int digits = count_digit(input[i + 1]);
            /*
            int num = 0;

            while (temp >= pow(10, digits)) {
                temp = temp / 10;
                num += 1;
            }
            */
           int num = count_digit(input[i]) - count_digit(input[i + 1]);

           for (int xx = 0; xx < num; xx++) {
               temp /= 10;
           }

           int num2 = pow(10, num);
            
            if (temp == input[i + 1]) {
                if (input[i] - (temp * num2) + 1 == num2) {
                    input[i + 1] = input[i + 1] * num2 * 10;
                    answer += num + 1;
                } else {
                    input[i + 1] = input[i] + 1;
                    answer += num;
                }
            } else {
                while (input[i] >= input[i + 1]) {
                    input[i + 1] *= 10;
                    answer += 1;
                }
            }
        }
    }

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
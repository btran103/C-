#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> dp(n, vector<int>(3));
    vector<vector<int>> diem(n, vector<int>(3));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> diem[i][j];
        }
    }

    for (int j = 0; j < 3; ++j) {
        dp[0][j] = diem[0][j];
    }

    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < 3; ++j) {
            dp[i][j] = diem[i][j];
            for (int k = 0; k < 3; ++k) {
                if (k != j) {
                    dp[i][j] = max(dp[i][j], dp[i - 1][k] + diem[i][j]);
                }
            }
        }
    }

    int diemmax = 0;
    for (int j = 0; j < 3; ++j) {
        diemmax = max(diemmax, dp[n - 1][j]);
    }
    cout << diemmax << endl;

    return 0;
}

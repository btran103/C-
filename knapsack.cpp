#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, W;
    cin >> n >> W;

    vector<int> weight(n), value(n);
    for (int i = 0; i < n; ++i) {
        cin >> weight[i] >> value[i];
    }

    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));

    for (int i = 1; i <= n; ++i) {
        for (int w = 0; w <= W; ++w) {
            dp[i][w] = dp[i-1][w];
            if (w >= weight[i-1]) {
                dp[i][w] = max(dp[i][w], dp[i-1][w-weight[i-1]] + value[i-1]);
            }
        }
    }

    cout << dp[n][W] << endl;

    return 0;
}


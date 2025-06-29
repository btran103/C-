#include <bits/stdc++.h>
using namespace std;

void conma(int n) {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    for (long long k = 1; k <= n; ++k) {
        long long tongsobuoc = (k * k) * (k * k - 1) / 2;
        long long cachdichuyen = 4 * (k - 1) * (k - 2);
        cout << tongsobuoc  - cachdichuyen << endl;
    }
}

int main() {
    long long n;
    cin >> n;
    conma(n);
    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    int maxProduct = INT_MIN;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            maxProduct = max(maxProduct, A[i] * A[j]);
        }
    }

    cout << maxProduct << endl;
    return 0;
}

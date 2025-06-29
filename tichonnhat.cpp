#include <iostream>
#include <vector>
#include <limits.h> 
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> A(n);

    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    int max1 = INT_MIN, max2 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;

    for (int i = 0; i < n; ++i) {
        if (A[i] > max1) {
            max2 = max1;
            max1 = A[i];
        } else if (A[i] > max2) {
            max2 = A[i];
        }
    }

    for (int i = 0; i < n; ++i) {
        if (A[i] < min1) {
            min2 = min1;
            min1 = A[i];
        } else if (A[i] < min2) {
            min2 = A[i];
        }
    }

    int maxProduct = max(max1 * max2, min1 * min2);

    cout << maxProduct ;

    return 0;
}


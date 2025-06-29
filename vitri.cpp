#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> arr(n);
    unordered_map<int, int> positions;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (positions.find(arr[i]) == positions.end()) {
            positions[arr[i]] = i + 1;
        }
    }

    for (int i = 0; i < q; ++i) {
        int x;
        cin >> x;
        if (positions.find(x) != positions.end()) {
            cout << positions[x] << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}


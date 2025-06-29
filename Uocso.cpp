#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> uoc;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            uoc.push_back(i);
        }
    }

    sort(uoc.rbegin(), uoc.rend());

    for (int i = 0; i < uoc.size(); i++) {
        cout << uoc[i] << endl;
    }

    return 0;
}


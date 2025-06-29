#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x, ai;
    cin >> n >> x;

    bool found = false;
    for (int i = 0; i < n; ++i) {
        cin >> ai;
        if (ai == x) {
            cout << i << " ";
            found = true;
        }
    }

    if (!found) {
        cout << "-1";
    }

    cout << endl;
    return 0;
}

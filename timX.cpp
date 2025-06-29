#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long n, x, ai, count = 0;
    cin >> n >> x;

    for (int i = 0; i < n; ++i) {
        cin >> ai;
        if (ai == x) {
            ++count;
        }
    }

    if (count > 0) {
        cout <<  count ;
    } else {
        cout << "-1" ;
    }

    return 0;
}


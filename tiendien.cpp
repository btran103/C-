#include <iostream>

using namespace std;

int main() {
    int x, a, b, c, d;
    cin >> x >> a >> b >> c >> d;

    int tien_dien = 0;

    if (x <= 50) {
        tien_dien = x * a;
    } else if (x <= 100) {
        tien_dien = 50 * a + (x - 50) * b;
    } else if (x <= 150) {
        tien_dien = 50 * a + 50 * b + (x - 100) * c;
    } else {
        tien_dien = 50 * a + 50 * b + 50 * c + (x - 150) * d;
    }

    cout << tien_dien ;

    return 0;
}

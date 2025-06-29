#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    long long result = 1;
    long long base = a % c;

    while (b > 0) {
        if (b % 2 == 1) {
            result = (result * base) % c;
        }
        base = (base * base) % c;
        b /= 2;
    }

    cout << result;

    return 0;
}


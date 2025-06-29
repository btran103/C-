#include <iostream>
using namespace std;

int sumOfMultiples(int k, int n) {
    int m = (n - 1) / k;
    return k * m * (m + 1) / 2;
}

int main() {
    int n;
    cin >> n;

    long long sum = sumOfMultiples(3, n) + sumOfMultiples(5, n) - sumOfMultiples(15, n);

    cout <<  sum << endl;
    return 0;
}

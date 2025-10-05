#include <bits/stdc++.h>
using namespace std;

double sqrtNewton(double x, double a, double epsilon) {
    if (fabs(a * a - x) <= epsilon) return a;
    double newA = (a * a + x) / (2 * a);
    return sqrtNewton(x, newA, epsilon);
}

int main() {
    double x, eps;
    cout << "Nhap x va epsilon: ";
    cin >> x >> eps;
    cout << "Can bac hai cua " << x << " ˜ " << sqrtNewton(x, x, eps);
    return 0;
}


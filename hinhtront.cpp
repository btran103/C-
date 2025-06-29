#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double r, chuVi, dienTich;
    const double pi = 3.14;

    cin >> r;
    chuVi = 2 * pi * r;
    dienTich = pi * r * r;

    cout << fixed << setprecision(3);
    cout  << chuVi << endl;
    cout  << dienTich ;

    return 0;
}

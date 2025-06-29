#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

bool isPerfectSquare(double n) {
    if (n < 0) return false; 
    double root = static_cast <double> (sqrt(n)); 
    return (root * root == n); 
}

int main() {
    double a;
    cin >> a;

    if (isPerfectSquare(a)) {
        cout << "YES" ;
    } else {
        cout << "NO" ;
    }

    return 0;
}

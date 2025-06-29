#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double A, B, thuong;

    cin >> A >> B;

    if (B == 0) {
    } else {
 
        thuong = A / B;
        thuong = (thuong * 100) / 100.0; 

        cout << fixed << setprecision(2) << thuong ;
    }
}

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Nhap he so a: ";
    cin >> a;
    cout << "Nhap he so b: ";
    cin >> b;

    if (a == 0) {
        if (b == 0) {
            cout << "INFINITE." << endl;
        } else {
            cout << "NO SOLUTION." << endl;
        }
    } else {
        if (-b % a == 0) {
            int x = -b / a;
            cout << "Nghiem nguyen cua phuong trinh la: " << x << endl;
        } else {
            cout << "NO SOLUTION." << endl;
        }
    }

    return 0;
}

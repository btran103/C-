#include <iostream>

using namespace std;

int main() {
    int d;
    cin >> d;

    int h = d / 3600; 
    d %= 3600;
    int m = d / 60;   
    int s = d % 60;

    cout << h << " "  << m << " "  << s  ;

    return 0;
}

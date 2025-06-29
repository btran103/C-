#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int n;
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }
        cout  << pow(n, 4) << endl;
    }
    return 0;
}

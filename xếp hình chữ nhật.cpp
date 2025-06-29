#include <iostream>

using namespace std;

bool canCombineRectangles(int a, int b, int c, int d) {
    return (a == c || b == d || a == d || b == c);
}

int main() {
    int a, b, c, d;

    cin >> a >> b;
    
    cin >> c >> d;
    
    if (canCombineRectangles(a, b, c, d)) {
        cout << "YES";
    } else {
        cout << "NO" ;
    }
    
    return 0;
}

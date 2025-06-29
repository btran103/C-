#include <iostream>
using namespace std;

int fibonacci(int n) {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    int n;
    cin >> n;
    cout <<  fibonacci(n) ;
    return 0;
}


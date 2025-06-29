#include <iostream>
using namespace std;


int reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed;
}

int main() {
    long a, b;
    cin >> a >> b;

    long long sum = a + b;
    long reversedSum = reverseNumber(sum);

    cout << reversedSum ;

    return 0;
}

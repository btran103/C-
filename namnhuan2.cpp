#include <iostream>
using namespace std;

int countLeapYears(long A, long B) {
    int count = 0;
    for (int year = A; year <= B; year++) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            count++;
        }
    }
    return count;
}

int main() {
    int A, B;
    cin >> A;
    cin >> B;

    int result = countLeapYears(A, B);
    cout <<  result ;

    return 0;
}

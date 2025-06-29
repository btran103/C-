#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return true;
            } else {
                return false;
            }
        } else {
            return true;
        }
    } else {
        return false;
    }
}

int countLeapYears(int A, int B) {
    int count = 0;
    for (int year = A; year <= B; year++) {
        if (isLeapYear(year)) {
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
    cout  << result ;

    return 0;
}

#include <iostream>
using namespace std;

bool isOddDigitSum(int num) {
    if (num == 0) return false;
    if (num % 10 % 2 == 1) return !isOddDigitSum(num / 10);
    return isOddDigitSum(num / 10);
}


int findNthSpecialOdd(int N) {
    int count = 0;
    int num = 1;
    while (true) {
        if (num % 2 == 1 && isOddDigitSum(num)) {
            count++;
            if (count == N) {
                return num;
            }
        }
        num += 2;
    }
}

int main() {
    int N;
    cin >> N;
    int result = findNthSpecialOdd(N);
    cout <<  result ;
    return 0;
}

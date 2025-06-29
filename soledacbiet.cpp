#include <iostream>
using namespace std;

bool isSpecialOdd(int num) {
    long sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum % 2 == 1;
}


int findNthSpecialOdd(int N) {
    int count = 0;
    int num = 1; 
    while (true) {
        if (num % 2 == 1 && isSpecialOdd(num)) {
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
    cout  << result ;

    return 0;
}

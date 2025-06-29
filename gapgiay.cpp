#include <iostream>

int main() {
    long n;
    std::cin >> n;

    int thickness = 2; 
    int folds = 0; 


    while (thickness < n) {
        thickness *= 2;
        folds++;
    }


    std::cout << folds ;

    return 0;
}


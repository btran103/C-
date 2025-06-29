#include <iostream>
#include <cmath>

std::string is_prime(int n) {
    if (n <= 1) return "NOT PRIME";
    for (int i = 2; i <= std::sqrt(n); ++i) {
        if (n % i == 0) return "NOT PRIME";
    }
    return "PRIME";
}

int main() {
    int n;
    std::cin >> n;
    std::cout << is_prime(n) ;
    return 0;
}


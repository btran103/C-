#include <iostream>
using namespace std;

int minCuts(int a, int b) {
    int cuts = 0;
    while (a > b) {
        a--; // Gi?m ð? dài c?nh xu?ng 1 ðõn v? m?i l?n
        cuts++;
    }
    return cuts;
}

int main() {
    int a, b;
    cout << "Nh?p ð? dài c?nh ban ð?u c?a ðèn ông sao: ";
    cin >> a;
    cout << "Nh?p ð? dài c?nh mong mu?n c?a ðèn ông sao: ";
    cin >> b;

    if (b >= a >=3) {
        cout << "Không c?n c?t, ðèn ông sao ð? có kích thý?c mong mu?n." << endl;
    } else {
        int result = minCuts(a, b);
        cout << "S? l?n c?t ít nh?t ð? ð?t ðý?c kích thý?c mong mu?n là: " << result << endl;
    }

    return 0;
}

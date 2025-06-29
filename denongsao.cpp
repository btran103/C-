#include <iostream>
using namespace std;

int minCuts(int a, int b) {
    int cuts = 0;
    while (a > b) {
        a--; // Gi?m �? d�i c?nh xu?ng 1 ��n v? m?i l?n
        cuts++;
    }
    return cuts;
}

int main() {
    int a, b;
    cout << "Nh?p �? d�i c?nh ban �?u c?a ��n �ng sao: ";
    cin >> a;
    cout << "Nh?p �? d�i c?nh mong mu?n c?a ��n �ng sao: ";
    cin >> b;

    if (b >= a >=3) {
        cout << "Kh�ng c?n c?t, ��n �ng sao �? c� k�ch th�?c mong mu?n." << endl;
    } else {
        int result = minCuts(a, b);
        cout << "S? l?n c?t �t nh?t �? �?t ��?c k�ch th�?c mong mu?n l�: " << result << endl;
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

void insertSorted(vector<int>& a, int n) {
    if (n <= 1) return;

    int last = a[n - 1];
    int j = n - 2;

    while (j >= 0 && a[j] > last) {
        a[j + 1] = a[j];
        j--;
    }
    a[j + 1] = last;
}

void insertionSortRecursive(vector<int>& a, int n) {
    if (n <= 1) return;
    insertionSortRecursive(a, n - 1);
    insertSorted(a, n);
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    vector<int> a(n);
    cout << "Nhap day: ";
    for (int i = 0; i < n; i++) cin >> a[i];

    insertionSortRecursive(a, n);

    cout << "Day sau khi sap xep tang dan: ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;

    return 0;
}


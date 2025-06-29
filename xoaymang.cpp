#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void rotateLeft(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n; 
    vector<int> temp(n);
    for (int i = 0; i < n; ++i) {
        temp[i] = arr[(i + k) % n];
    }
    arr = temp;
}

int findSecondSmallest(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    int smallest = arr[0];
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] != smallest) {
            return arr[i];
        }
    }
    return -1;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> A(n);
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }
    rotateLeft(A, k);
    
    int second_smallest = findSecondSmallest(A);
    cout << second_smallest ;

    return 0;
}


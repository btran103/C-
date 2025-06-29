#include <iostream>
#include <vector>

using namespace std;

void rearrangeArray(vector<int>& arr) {
    vector<int> result(arr.size());
    int posIndex = 0;
    int negIndex = 0;

    for (int num : arr) {
        if (num >= 0) {
            ++negIndex;
        }
    }

    for (int num : arr) {
        if (num >= 0) {
            result[posIndex++] = num;
        } else {
            result[negIndex++] = num;
        }
    }

    arr = result;
}

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    rearrangeArray(A);

    for (int num : A) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}


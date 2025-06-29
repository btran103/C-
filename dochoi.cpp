#include <bits/stdc++.h>
using namespace std;

string xepLoai(int t) {
    if (t >= 9.0) {
        return "VERY GOOD";
    } else if (t >= 5.0) {
        return "GOOD";
    } else {
        return "SAFE";
    }
}

int main() {
	int point;
	cin >> point;
	float arr[] = {point};

    vector<float> doChoi(arr, arr + sizeof(arr) / sizeof(arr[0]));

    for (int i = 0; i < doChoi.size(); i++) {
        cout << xepLoai(doChoi[i]) << endl;
    }

    return 0;
}

#include <iostream>
#include <vector>
#include <string>

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
//    vector<int> doChoi = {10, 7, 3, 9, 5}; 
	int value;
	cout << "input point: ";
	cin >> value;
	float arr[] = {value};
	
    vector<float> doChoi(arr, arr + sizeof(arr) / sizeof(arr[0]));

    for (int i = 0; i < doChoi.size(); i++) {
        cout << "Ð choi " << i+1 << ": " << xepLoai(doChoi[i]) << endl;
    }

    return 0;
}

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int arr[] = {a, b, c};
    sort(arr, arr + 3);

    if (arr[0] == arr[1]) {
        cout <<  arr[2] ;
    } else {
        cout << arr[0] ;
    }

    return 0;
}

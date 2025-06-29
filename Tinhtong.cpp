#include <iostream>
#include <vector>
using namespace std;
int main() {
    int N;
    cin >> N;

    vector<int> numbers(N);
    for (int i = 0; i < N; ++i) {
        cin >> numbers[i];
    }

    int total = 0;
    for (int i = 0; i < N; ++i) {
        total += numbers[i];
    }

	cout << total ;

    return 0;
}

#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    while (cin >>  n) {
        if (n == 0) {
            break;
        }
        long long results[4];  
        results[0] = n;
        results[1] = results[0] * n;
        results[2] = results[1] * n;
        results[3] = results[2] * n;
        cout <<  results[3] << endl;
        }
    return 0;
}


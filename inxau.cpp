#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;

    cout <<  "  ";
    getline(cin, S);
    for (int i = 0; i < 4; ++i) {
        cout << S << endl ;
    }

    return 0;
}

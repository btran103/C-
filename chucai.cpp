#include <bits/stdc++.h>

using namespace std;
 

int main() {
    char c;

    cin >> c;

    if (islower(c)) {
        cout << char(toupper(c)) ;
    } 
    else if (isupper(c)) 
    {
        cout << char(tolower(c)) ;
    } else 
    {
        cout << endl;
    }

    return 0;
}

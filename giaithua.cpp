#include <bits/stdc++.h>

using namespace std;
 
int main()
{
    int n;
    long giaiThua = 1;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        giaiThua = giaiThua * i;
    }
    cout << giaiThua << endl;
    return 0;
}

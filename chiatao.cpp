#include <bits/stdc++.h>
#define int long long
#define fu(i, a, b) for (int i = a; i < b; ++i)
#define maxn (int) 20 + 1
using namespace std;
int a[maxn];
int s1, s2, n, res;
void thu_xet(int i) {
    if (i>n){
        res = min(res, abs(s1 - s2));
        return ;
    }
    s1 += a[i];
    thu_xet(i + 1);
    s1 -= a[i];
    s2 += a[i];
    thu_xet(i + 1);
    s2 -= a[i];

}
signed main() {
    cin >> n;
    s1 = 0; s2 = 0;
    fu(i, 1, n+1){
        cin >> a[i];
        res += a[i];
    }
    thu_xet(1);
    cout << res << endl;
    return 0;

}

#include <bits/stdc++.h>
using namespace std;

vector <int> a;
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    
  
    a.resize(n);
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    
    
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        long  tong = 0;
        for (int j = u; j <= v; j++) {
            tong += a[j];
        }
        cout << tong << endl;
    }
    return 0;
}

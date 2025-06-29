#include <bits/stdc++.h>
using namespace std;
vector <long long> a;
int main () {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int n, q;
	cin >> n >> q;
	a.resize(n);
	for (int i = 0; i < n; i++)
	cin >> a[i];
	for (int i = 0; i < q; i ++) {
		int x;
		cin >> x;
		 int kq = -1;
        for (int j = 0; j < n; j++) {
            if (a[j] == x) {
                kq = j + 1;
               
            }
        }
        cout << kq << endl;
	}
	return 0;
}

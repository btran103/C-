#include <bits/stdc++.h>
const int MOD = 1e9 + 7;
const int MAXN = 1e5 + 1;
using namespace std;
string cong (string a, string b) {
	while (a.size() < b.size()) a = '0' + a;
	while (b.size() < a.size()) b = '0' + b;
	int n = a.size(), tong, nho = 0;
	string kq = "";
	for (int i = n - 1; i >= 0; i--) {
		tong = (a[i] - 48) + (b[i] - 48) + nho;
		kq = char (tong % 10 + 48 ) + kq;
		nho = tong / 10;
	}
	if (nho > 0) kq = "1" + kq;
	return kq;
	
}
signed main()
{
	int n;
	cin >> n;
	string f0 = "0", f1 = "1", f2;
	for (int i = 2; i <= n; i++) {
		f2 = cong(f0, f1);
		f0 = f1, f1 = f2;
	}
	cout << f1;
	return 0;
}
	

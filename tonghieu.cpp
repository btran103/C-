#include <bits/stdc++.h>
using namespace std;

long long tinh_toan(int a,  int b) {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main(){
	long long a,b;
    cin >> a >> b;
    long long tong = 0; long long hieu = 0; long long tich = 1;
    tong = a + b + tong;
    hieu = a - b + hieu;
    tich = a * b * tich;
	cout << tong << endl;
	cout << hieu << endl;
	cout << tich ;
    return 0;
}

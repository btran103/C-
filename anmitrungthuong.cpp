#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	    cin.tie(NULL);
	int n, k;
	cin >> n >> k;
	
	int ngay = 0;
    int goi = 0;

    while (n > 0) {
        ngay += n; 
        goi += n; 
        n = goi / k; 
        goi %= k; 
    }

    cout << ngay ;
    return 0;
}

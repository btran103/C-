#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define MAXN 100005
int n, h[MAXN], f[MAXN];

int dp(int i){
	if (i==n) return 0;
	if (f[i] != -1) return f[i];
	f[i] = dp(i+1) + abs(h[i] - h[i+1]);
	if(i<n-1) 
		f[i] = min(f[i], dp(i+2) + abs(h[i] - h[i+2]));
	return f[i];

}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin>>n;
	for(int i = 1; i <= n; i++) cin>>h[i];
 
	memset(f,-1,sizeof(f));

	cout<<dp(1);
	return 0;
}

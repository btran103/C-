#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

string chuyendoinhiphan(long long so ) {
	string ketqua=" ";
	while(so>0)
	{
		ketqua+=(so%2)+'0';
		so /=2;
	}
	reverse(ketqua.begin(), ketqua.end());
	return ketqua;
}
string chuyendoibatphan( long long so ) {
	string ketqua=" ";
	while(so>0) {
		ketqua+=(so%8)+'0';
		so/=8;

	}
	reverse(ketqua.begin(),ketqua.end());
	return ketqua;
}
string chuyendoithaplucphan(long long so) {
    string ketqua=" ";
    char kythuthapluc[]="0123456789ABCDEF";
    while(so>0)
    {
        ketqua+=kythuthapluc[so%16];
        so /=16;
    }
    reverse(ketqua.begin(), ketqua.end());
    return ketqua;
}
int main()
{
    long long so;
    cin>>so;
    cout<<chuyendoinhiphan<<endl;
    cout<<chuyendoibatphan<<endl;
    cout<<chuyendoithaplucphan;
return 0;
}

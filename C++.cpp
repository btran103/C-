C++
#include <iostream>
using namespace std;
int main(){
	int a,b,c,x,y,z;
	cin >>a >> b >> c >> x >> y >>z;
	if (c>z) cout <<2;
	else { 
	    if (c<z) cout <<1;
	    else {
		    if(c==z && b>y) cout <<2;
		    else {
		        if (c==z && b>y) cout <<1;
		        else {
		        	if (a>x) cout<<2;
		        	else{
		        		if(a<x) cout<<1;
		        			else cout<<0;
					}
				}
			}
	}
}
    return 0;
}
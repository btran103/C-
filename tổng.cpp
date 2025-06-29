#include <iostream>
using namespace std;

int sum(int a,int b) {
	return a + b;
}

int main() {
	cout << sum (3, 4) << endl;
	
	int a = 1, b = 2;
	cout << sum(a,b) << endl;
	
	cin >> a >> b;
	cout << sum(a,b) << endl;

	return 0;
}

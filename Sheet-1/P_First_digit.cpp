#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	cin >> x;
	x /= 1000;
	if( x % 2 == 0 )
		cout << "EVEN\n";
	else
		cout << "ODD\n";
	return 0;
}
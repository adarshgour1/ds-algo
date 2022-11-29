#include <bits/stdc++.h>
using namespace std;

int main() {
	// 0 1 2 3 4 5 6 7 8 9 10 11
	int a, b;
	cin >> a >> b;
	if( ( abs( a - b ) > 1 ) || a == 0 && b == 0 )
		cout << "NO\n";
	else
		cout << "YES\n";
	return 0;
}
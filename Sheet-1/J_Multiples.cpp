#include <bits/stdc++.h>
using namespace std;

void checkMultiple( int a, int b ) {
	if( ( a % b ) == 0 )
		cout << "Multiples\n";
	else
		cout << "No Multiples\n";
}

int main() {
	int a, b;
	cin >> a >> b;

	if( a >= b )
		checkMultiple( a, b );
	else
		checkMultiple( b, a );

	return 0;
}
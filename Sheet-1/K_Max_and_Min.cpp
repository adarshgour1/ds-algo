#include <bits/stdc++.h>
using namespace std;

int max( int a, int b, int c ) {
	if( a >= b && a >= c ) return a;
	if( b >= a && b >= c ) return b;
	return c;
}

int min( int a, int b, int c ) {
	if( a <= b && a <= c ) return a;
	if( b <= a && b <= c ) return b;
	return c;
}

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << min( a, b, c ) << " " << max( a, b, c ) << endl;
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
	char x;
	cin >> x;
	if( x >= 'A' && x <= 'Z' )
		cout << (char)( x + 32 ) << "\n";
	else
		cout << (char)( x - 32 ) << "\n";
	return 0;
}
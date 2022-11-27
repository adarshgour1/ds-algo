#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c;
	char op;
	cin >> a >> op >> b;
	cin.ignore( 2 );
	cin >> c;
	switch( op ) {
		case '+':
			if( a + b == c )
				cout << "Yes\n";
			else
				cout << a + b << "\n";
			break;

		case '-':
			if( a - b == c )
				cout << "Yes\n";
			else
				cout << a - b << "\n";
			break;

		case '*':
			if( a * b == c )
				cout << "Yes\n";
			else
				cout << a * b << "\n";
			break;

		default:
			break;
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	char op;
	cin >> a >> op >> b;
	bool flag = false;
	switch( op ) {
		case '=':
			if( a == b ) flag = true;
			break;
		case '<':
			if( a < b ) flag = true;
			break;
		case '>':
			if( a > b ) flag = true;
			break;
		default:
			break;
	}
	if( flag )
		cout << "Right\n";
	else
		cout << "Wrong\n";
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
	char x;
	cin >> x;
	if( x >= 'A' && x <= 'Z' ) cout << "ALPHA\nIS CAPITAL\n";
	if( x >= '0' && x <= '9' ) cout << "IS DIGIT\n";
	if( x >= 'a' && x <= 'z' ) cout << "ALPHA\nIS SMALL\n";
	return 0;
}
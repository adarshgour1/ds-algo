#include <bits/stdc++.h>
using namespace std;
string s;
bool isInt( int pos ) {
	bool flag = true;
	for( int i = pos + 1; i < s.size(); i++ ) {
		if( s[i] != '0' ) {
			flag = false;
			break;
		}
	}
	return flag;
}
int main() {
	cin >> s;
	auto position = s.find( '.' );
	if( position == s.npos || isInt( position ) ) {
		cout << "int " << s.substr( 0, position ) << "\n";
	} else {
		cout << "float " << s.substr( 0, position ) << " 0." << s.substr( position + 1, s.size() - 1 ) << "\n";
	}
	return 0;
}
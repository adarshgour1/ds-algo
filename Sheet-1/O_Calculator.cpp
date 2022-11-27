#include <bits/stdc++.h>
using namespace std;
static string op = "+-*/";

int main() {
	int position;
	string s;
	getline( cin, s );
	for( auto&& i : op ) {
		if( ( position = s.find( i ) ) != s.npos ) {
			break;
		}
	}

	int a = stoi( s.substr( 0, position ) );
	int b = stoi( s.substr( position + 1, s.size() - 1 ) );
	switch( s[position] ) {
		case '+':
			cout << a + b << "\n";
			break;
		case '-':
			cout << a - b << "\n";
			break;
		case '*':
			cout << a * b << "\n";
			break;
		case '/':
			cout << a / b << "\n";
			break;

		default:
			break;
	}

	return 0;
}
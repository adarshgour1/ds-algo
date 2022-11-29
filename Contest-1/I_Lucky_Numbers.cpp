#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int first, second;
	first = n % 10;
	n /= 10;
	second = n;
	if( first > second ) swap( first, second );
	if( first == 0 && second == 0 ) {
		cout << "NO\n";
	} else if( first == 0 ) {
		cout << "YES\n";
	} else if( second % first ) {
		cout << "NO\n";
	} else {
		cout << "YES\n";
	}

	return 0;
}
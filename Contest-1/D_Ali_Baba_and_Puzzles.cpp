#include <bits/stdc++.h>
using namespace std;

typedef long long int var;

#define CHECK( var ) \
	if( var == d ) flag = true;

int main() {
	var a, b, c, d;
	cin >> a >> b >> c >> d;
	bool flag = false;
	string ops = "+-*";
	var result = a + b * c;
	CHECK( result )
	result = a + b - c;
	CHECK( result )
	result = a - b * c;
	CHECK( result )
	result = a - b + c;
	CHECK( result )
	result = a * b + c;
	CHECK( result )
	result = a * b - c;
	CHECK( result )

	if( flag )
		cout << "YES\n";
	else
		cout << "NO\n";

	return 0;
}

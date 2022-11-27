#include <bits/stdc++.h>
using namespace std;

int main() {
	unsigned int a, b, c, d;
	cin >> a >> b >> c >> d;
	a %= 100;
	b %= 100;
	c %= 100;
	d %= 100;
	printf( "%02d\n", ( a * b * c * d ) % 100 );
	return 0;
}
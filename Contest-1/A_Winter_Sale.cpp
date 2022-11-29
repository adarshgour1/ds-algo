#include <bits/stdc++.h>
using namespace std;

int main() {
	float x, s;
	cin >> x >> s;
	float rem = 1 - ( x / 100.00 );
	printf( "%.2f\n", s / rem );
	return 0;
}
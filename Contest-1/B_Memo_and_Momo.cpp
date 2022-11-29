#include <bits/stdc++.h>
using namespace std;

int main() {
	unsigned long long int a, b, k;
	cin >> a >> b >> k;
	unsigned long long int memo = a % k;
	unsigned long long int momo = b % k;
	if( !memo && !momo )
		cout << "Both\n";
	else if( !memo )
		cout << "Memo\n";
	else if( !momo )
		cout << "Momo\n";
	else
		cout << "No One\n";

	return 0;
}
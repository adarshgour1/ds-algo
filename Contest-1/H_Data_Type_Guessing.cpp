#include <bits/stdc++.h>
using namespace std;

int main() {
	double n, k, a;
	cin >> n >> k >> a;
	double ans = n * k / a;
	long long temp = n * k / a;
	ans -= temp;

	if( ans > 0 )
		cout << "double";
	else if( temp <= INT_MAX && temp >= INT_MIN )
		cout << "int";
	else
		cout << "long long";

	cout << "\n";
	return 0;
}
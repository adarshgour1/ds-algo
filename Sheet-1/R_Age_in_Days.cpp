#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	cin >> x;
	cout << x / 365 << " years\n";
	x %= 365;
	cout << x / 30 << " months\n";
	x %= 30;
	cout << x << " days\n";
	return 0;
}
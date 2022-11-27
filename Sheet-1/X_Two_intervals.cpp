#include <bits/stdc++.h>
using namespace std;
class Interval {
	public:
	int l;
	int r;
	bool isBetween( int no ) {
		if( no >= l && no <= r ) return true;
		return false;
	}
};
int main() {
	Interval i1, i2;
	cin >> i1.l >> i1.r >> i2.l >> i2.r;
	if( i1.l > i2.l ) swap( i1, i2 );

	if( i1.isBetween( i2.l ) )
		cout << i2.l << " ";
	else {
		cout << "-1" << endl;
		return 0;
	}

	cout << min( i1.r, i2.r ) << "\n";

	return 0;
}
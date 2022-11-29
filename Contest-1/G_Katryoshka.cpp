#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int e, m, b, ans = 0;
	cin >> e >> m >> b;
	if( b > 0 ) {
		if( m > 0 ) {
			ans = min( m, e );
			e -= m;
		}

		if( e > 0 ) {
			ans += ( e / 2 );
		}
		ans = min( ans, b );
	}
	cout << ans << "\n";

	return 0;
}
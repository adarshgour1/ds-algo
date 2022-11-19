#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
	vector<int> getConcatenation( vector<int>& nums ) {
		auto size = nums.size();
		vector<int> v( size * 2 );
		for( int i = 0; i < size; i++ ) {
			v[i] = nums[i];
			v[size + i] = nums[i];
		}
		return v;
	}
};

int main( int argc, char const* argv[] ) {
	Solution s;
	int n;
	cin >> n;
	vector<int> v( n );
	for( int i = 0; i < n; i++ ) cin >> v[i];

	auto ans = s.getConcatenation( v );

	for( int i = 0; i < 2 * n; i++ ) cout << ans[i] << " ";
	return 0;
}

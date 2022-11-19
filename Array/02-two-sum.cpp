// https://leetcode.com/problems/two-sum/

#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
	vector<int> twoSum( vector<int>& nums, int target ) {
		vector<int> ans;
		for( int i = 0; i < nums.size(); i++ ) {
			for( int j = i + 1; j < nums.size(); j++ ) {
				if( ( nums[i] + nums[j] ) == target ) {
					ans.push_back( i );
					ans.push_back( j );
					return ans;
				}
			}
		}

		return ans;
	}
};

int main( int argc, char const* argv[] ) {
	Solution s;
	int n;
	cin >> n;
	vector<int> v( n );
	for( int i = 0; i < n; i++ ) cin >> v[i];
	auto ans = s.twoSum( v, 6 );
	for( auto&& i : ans ) {
		cout << i << " ";
	}
	return 0;
}

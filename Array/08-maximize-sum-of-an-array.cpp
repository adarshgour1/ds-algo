//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MOD int( 1e9 + 7 )

// } Driver Code Ends
class Solution {
	public:
	int Maximize( int a[], int n ) {
		sort( a, a + n );
		unsigned long long sum = 0;
		for( int i = 0; i < n; i++ ) {
			sum = ( sum + ( (unsigned long long)a[i] * i ) % MOD ) % MOD;
		}
		return sum;
	}
};

//{ Driver Code Starts.
int main() {
	int t;
	cin >> t;
	while( t-- ) {
		int n;
		cin >> n;
		int a[n];
		for( int i = 0; i < n; i++ ) cin >> a[i];
		Solution ob;
		cout << ob.Maximize( a, n ) << endl;
	}
}
// } Driver Code Ends
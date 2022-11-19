//{ Driver Code Starts
#include <string.h>

#include <iostream>
using namespace std;

// } Driver Code Ends
/*Complete the function below*/

class Solution {
	private:
	bool isNumPalindrome( int x ) {
		std::string s( to_string( x ) );
		int start = 0, end = s.size() - 1;
		while( start <= end ) {
			if( s[start] == s[end] ) {
				start++;
				end--;
			} else {
				return false;
			}
		}
		return true;
	}

	public:
	int PalinArray( int a[], int n ) {
		// code here
		for( int i = 0; i < n; i++ ) {
			if( !isNumPalindrome( a[i] ) ) return 0;
		}
		return 1;
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
		Solution obj;
		cout << obj.PalinArray( a, n ) << endl;
	}
}
// } Driver Code Ends
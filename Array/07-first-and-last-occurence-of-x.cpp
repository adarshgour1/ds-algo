//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find( int arr[], int n, int x ) {
	// code here
	vector<int> ans{ -1, -1 };
	int j = 0;
	for( int i = 0; i < n; i++ ) {
		if( arr[i] == x ) {
			ans[j] = i;
			if( j == 0 ) ans[++j] = i;
		}
	}
	return ans;
}

//{ Driver Code Starts.

int main() {
	int t;
	cin >> t;
	while( t-- ) {
		int n, x;
		cin >> n >> x;
		int arr[n], i;
		for( i = 0; i < n; i++ ) cin >> arr[i];
		vector<int> ans;
		ans = find( arr, n, x );
		cout << ans[0] << " " << ans[1] << endl;
	}
	return 0;
}

// } Driver Code Ends
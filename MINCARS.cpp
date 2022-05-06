#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for getting input from output.txt
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;

	while (t--) {

		int n;
		cin >> n;

		int res=0;
		if(n%4==0) res = n/4;
		else res = n/4 + 1;

		cout << res;

		cout << endl;

	}

	return 0;
}
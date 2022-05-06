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

	while(t--){
		
		int n;
		cin >> n;

		int sum = n % 10;
		int r = 0;

		while(n > 0){
			r = n % 10;
			n/=10;
		}

		sum += r;

		cout << sum << endl;
	}

	return 0;
}
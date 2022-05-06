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
		
		int a, b;
		cin >> a >> b;

		cout << a%b << '\n';
	}

	return 0;
}
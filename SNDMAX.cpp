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
		
		int a, b, c;
		cin >> a >> b >> c;

		if(a > b && a > c){
			if(b > c) cout << b;
			else cout << c;
		}
		else if(b > a && b > c){
			if(a > c) cout << a;
			else cout << c;
		}
		else{
			if(a > b) cout << a;
			else cout << b;
		}

		cout << '\n';
	}

	return 0;
}
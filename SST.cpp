#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	int t;

	cin >> t;
	while(t--) 
	{
		int a, b;
		cin >> a >> b;

		if(2*a > b)
			cout << "first" << endl;

		else if(2*a==b)
			cout << "any" << endl;

		else
			cout << "second" << endl;
	}

	return 0;
}

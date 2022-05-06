#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	int t;
	cin >> t;

	while (t--) {
	
		int X;
		cin >> X;

	if(X>=1000){
	cout << X/10 << endl;
    }
	else
	cout << "100" << endl;	
	}


	return 0;
}
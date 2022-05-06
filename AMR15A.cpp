#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for getting input from output.txt
	freopen("output.txt", "w", stdout);
#endif

	int n,A[100],cnt = 0;
	cin >> n;

	for(int i = 0; i<n; i++){
		cin >> A[i];
		if(A[i]%2 == 0) cnt++;
	}

	if(cnt > (n - cnt)) cout << "READY FOR BATTLE";
	else cout << "NOT READY";

	return 0;
}
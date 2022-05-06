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
		int n;
		int x = 0;
		int m = 0;
		int z = 0;
		cin >> n;
		if(n%5 == 0)
		{
		m = (4/5)*n;
		cout << m << endl;
	}
		else
		{
		x = n%5;
		m = n - x;
		z = (4/5)*m + x;
		cout << z << endl;
	}


}
	return 0;
}
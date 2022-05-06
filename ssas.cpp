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
		cin >> n;
		int m = 0;
		int x = 0;
		int z = 0;
	   if(n%5 == 0)
		{
		m = (4*n/5);
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
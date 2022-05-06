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

	int X, Y;
	cin >> X >> Y;

	if(3*X>=2*Y)
	{
		cout  << 2*Y << endl;
	}
  else
	cout << 3*X << endl;


	return 0;

}
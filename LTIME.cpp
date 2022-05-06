#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	int t ;
	cin >> t ;
	while (t--)
	{
		int x;
		cin >> x;
		if(x%3==1)
		{
			cout << "HUGE" << endl;
		}
		else if (x%3==2)
		{
			cout << "SMALL" << endl;
		}
		else 
		{
			cout << "NORMAL" << endl;
		}

	}

	return 0;
}
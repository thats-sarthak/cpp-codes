#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	int n;
	cin >> n;
	int a[n];

	for(int i=0; i<n; i++)
	{
		cin >> a[i];
	}

	int key , i;
	cin >> key;
	for(int i=0; i<n; i++)
	{

	if (a[i]==key)
	{
		cout << " Element found " << key  << " at " << i << " index " << endl;
		
	}

	else
	{
		cout << " Not Found " << endl;
		
	}
}

	
	
}
#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	int t;
	cin >> t;

	while (t--) 
	{
		int n, j=0, i;
		cin >> n;
		int arr[n];
		for(i=0; i<n; i++)
		{
			cin >> arr[i];
		if(arr[i-1]>arr[i] && i>=1)
		{
			swap(arr[i-1], arr[i]);
			if(arr[i-2]>arr[i-1] && i>=2)
			{
				j+=2;
			}
			else if(arr[i-2]>arr[i-1] && i>=2)
			{
				j+=1;
			}
			else if(i==1)
			{
				j+=1;
			}
			else 
			{
				j+=1;
			}
		}
	}

  
  if(j<2)
  	cout << "Yes" << endl;
  else
  	cout << "No" << endl;
}





	return 0;
}

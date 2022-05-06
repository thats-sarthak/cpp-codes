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
		for(int i = 0; i<n; i++)
		{
			cin >> a[i];
		}

    
      for(int j=1; j<n-1; j++)
      {
      	if(a[0]<=a[j])
      		cout << "Yes" << endl;
      	else 
      	{
      		cout << "No" << endl;
      	}
      

  }




	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
    
		int n, counter=0; 
		cin >> n;
		int A[];
		for(int i=2; i<n;i++)
		{
			cin >> A[i];
		}

		for(int i=2; i<n+2; i++)
		{
			for(int j=i+1; j<n+2; j++)
				{
					if(A[i]*A[j]>0)
					{
						counter++;
					}
				}
		}
		cout << counter;
	
	}
}

	

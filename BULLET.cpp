#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	
		int t ;
		cin >> t;

		while (t--)
		{
			int n;
			cin >> n;
			int A[n];
			for(int i=0; i<n; i++)
			{
				cin >> A[i];
			}
			for(int i=0; i<n; i++)
			{
				for(int j=0; j<n; j++)
				{
					if(A[i]+A[j]<=A[i]*A[j])
				{
				cout << (i, j)<< endl;
				}
				else
				{
				cout << "No pairs satisfy the condition" << endl;
				}
								}
							}
						}

	
					return 0;

						}
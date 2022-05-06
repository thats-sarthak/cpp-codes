#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	int n;
	cin >> n;
	int mx = -1999999;
    int arr[n];
	for(int i=0; i<n; i++)
	cin >> arr[i];


    for(int i=0; i<n; i++)
    	{
    		mx = max(mx , arr[i]);
    		cout << mx << endl;
    	}
 

	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	int n;
	int mx = INT_MIN;
	cin >> n;
    int a[n];

    for(int i=0; i<n; i++)
    {
    	cin >> a[i];
    }

    for(int i=0; i<n; i++)
    {
    	mx = max(mx, a[i]);
    	cout << mx << endl;
    }



	
	
}
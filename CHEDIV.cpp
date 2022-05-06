#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

    	int t;
    	cin>>t;

    	while (t--){	
    		int A[100000],n,x,y;
    		cin>>n>>x>>y;

    		int cnt = 0;

    		// for(int i = 0; i<n; i++) cin>>A[i];

    		// for(int i = 0; i<n ;i++) if(A[i]<=x && A[i]%y==0) cnt++;

    		for(int i = 0; i<n; i++){
    			cin>>A[i];
    			if(A[i]<=x && A[i]%y==0) cnt++;
    		}

    		cout<<cnt<<endl;
    	}
    	
    
}  

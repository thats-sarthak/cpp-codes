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

    		int A[100],n,k;
    		cin>>n>>k;

    		int cnt = 0;

    		for(int i = 0; i < n; i++){
    			cin>>A[i];
    			if((A[i]+k) % 7 == 0) cnt++;
    		}
    	
    	cout<<cnt<<endl;
    }
    
}  

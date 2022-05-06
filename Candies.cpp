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
    		int n,m,l;
    		cin>>n>>m>>l;

    		for(int i = n;i>=1;i--){
    			if(i<m) m = m % (l+i-1);

    		}

    		cout<<m<<endl;
    	}
    	
    
}  

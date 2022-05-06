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
    		int d,c,A[6];
    		cin>>d>>c;
    		bool res = false;

			int s1=0,s2=0;

    		for(int i = 0; i < 6; i++) {
    			cin>>A[i];
    			if(i<3) s1+=A[i];
    			else s2+=A[i];

    		}

    	// if(s1 >= 150 || s2 >= 150) {
    	// 	if(c<(d)) cout<<"Yes";
    	// 	else cout<<"NO";
    	// }

    		if(s1 >= 150 && s2 >= 150){if(c<(d*2)) res = true;}

    		else if(s1 >= 150 || s2 >= 150){if(c<(d)) res = true;}


    		if(res) cout<<"YES";
    		else cout<<"NO";
    	
    	cout<<endl;
    }
    
}  

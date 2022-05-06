#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
    	int t;
		cin >> t;
		while(t--) {
		    
	
		int n, i ;
		cin >> n;
		int s[n];
		for(int i=0; i<n; i++)
		{
        

		if(s[i]==1 && s[i-1]==1)
		{
			cout << "2" << endl;
		}
		else if(s[i]==1 && s[i-1]==0)
		{
			cout << "1" << endl;

		}
		else
			cout << "0" << endl;
	}

}
return 0;
}
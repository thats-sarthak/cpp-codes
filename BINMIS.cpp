#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	int t;
	cin >> t;

	while (t--) 
	{
		int n,l,r,onc=0,offc=0,on=0,off=0;
		cin >> n;

		string A;
		cin >> A;

		// for(int i = n-1; i>=0; i--){
		// 	if(A[i]=='1'){
		// 		++onc;
		// 		on = i;
		// 	}
		// 	else {
		// 		++offc;
		// 		off = i;
		// 	}

		for(int i = 0; i<n; i++){
			if(A[i]=='1'){
				++onc;
				on = i;
			}
			else {
				++offc;
				off = i;
			}


		}

		// cout<< "off " << offc << " onc " << onc<<endl;
		// offc = n - onc;

		if(n%2!=0) {
			cout<<"NO"<<endl;
			continue;
		}

		// if(onc == offc) {
		// 	l = 1; r = n;
		// }

		int c = 0;
		if(onc>offc) {
			c = onc - offc - 2;
			// l = on+1;
			// r = on+1+c;

			r = on + 1;
			l = on + 1 - c;

		}
		else if(offc>onc) {
			c = offc - onc - 2;
			// l = off+1;
			// r = off+1+c;

			r = off + 1;
			l = off + 1 - c;
		}
		else{
			l = 1; r = n;
		}


		cout<<"YES"<<endl;
		cout << l << ' ' << r << endl;


	}

	// cout<<"Yash"<<endl;
	return 0;
}

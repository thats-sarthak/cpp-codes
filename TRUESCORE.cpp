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

	
	int a ;
	int b ;
	int c ;
	int d ;

	cin >> a >> b >> c >> d ;

	if(c<a || d<b)
	
    cout << "Impossible" << endl ;
     
    if(c>=a || d>=b)
    
    cout  << " possible" << endl;
  }

return 0;

}

    

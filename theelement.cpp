#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

		vector<int> a = {1, 12, 28, 86, 58};
		cout << "Vector : ";


		for(int i=0; i < a.size(); i++)
			cout << a[i] << " ";
		    cout << endl;
		    cout << " Minimum Element : "
		    << *min_element(a.begin(), a.end());
		    cout << endl;
		    cout << "Maximum element : "
		    << *max_element(a.begin(), a.end());

	

	

	return 0;
}
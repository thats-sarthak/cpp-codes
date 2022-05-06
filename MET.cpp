#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for getting input from output.txt
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;

	while (t--) {

		int n, A[100000], cnt_odd = 0;
		cin >> n;


		for (int i = 0; i < n; i++) {
			cin >> A[i];
			if (A[i] % 2 != 0) cnt_odd++;
		}

		int cnt = 0;

		if (cnt_odd == n) cnt = 0;
		else if (cnt_odd % 2 == 0) cnt = cnt_odd / 2;
		else cnt = min(n-cnt_odd,cnt_odd / 2 );

		cout << cnt;
		cout << endl;

	}

	return 0;
}
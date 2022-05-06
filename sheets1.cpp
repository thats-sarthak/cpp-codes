#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	int arr[5] = {1, 2, 4, 5, 6};
	cout << "Array :";
	for(int i=0; i<5; i++){

		cout<<arr[i]<< " ";
	}


	reverse(arr, arr+5);
	cout << "\nReverse Array :";
	for(int i=0; i<5; i++){

		cout<<arr[i]<< " ";
	}

	return 0;
}
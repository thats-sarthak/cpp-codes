#include<bits/stdc++.h>
using namespace std;



void Sort(int arr[], int n){

	int low = 0;
	int mid = 0;
	int high = n-1;

	while(mid<=high)


	{
		if(arr[mid]==0){
			swap(arr[low], arr[mid]);
			low++; mid++;
		}
		else if(arr[mid]==1)
			mid++;
		else{
			swap(arr[mid], arr[high]);
			high--;
		}
	}
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

		int arr[] = {1,0,2,1,0,1,2,1,2};
		for(int i=0; i<9; i++)
		{
			cout << arr[i] << " ";
		}

		Sort(arr, 9);


		for(int i = 0; i < 9; i++){
			cout << "The sorted array is : ";
			cout << arr[i] << " "; 
		}
	
	

	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif
    	int n=4;
    	// cin>>n;
    	cout<<"yash"<<endl;
    	for(int i =1; i<=n;i++){
    		for(int k = 1; k<=n-i;k++){
    			cout<<' ';
    		}
    		cout<<'*';
    		int j = 1;
    		while (j>(i-1)){
    			cout<<" *";
    			j--;
    		}
    		cout<<endl;
    	}
    
}  

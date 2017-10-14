#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	long long int n;
	while(t--){
	cin>>n;
	vector<long long int> arr(n);
	vector<long long int> res(n,1);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=n-2;i>=0;i--){
		if(arr[i]*arr[i+1]<0){
			res[i]=res[i+1]+1;
		}
	}
	for(int i=0;i<n;i++){
		cout<<res[i]<<" ";
	}
	cout<<"\n";
}
}
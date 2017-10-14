#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,k,count;
	cin>>t;
	while(t--){
		cin>>n>>k;
		count=0;
		vector<int> arr(n);
		for(int i=0;i<n;i++){
			cin>>arr[i];
			arr[i]+=k;
			if(arr[i]%7==0){
				count++;
			}
		}
		cout<<count<<"\n";
	}
}
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int t,k,n;
	cin>>t;
	while(t--){
		cin>>n>>k;
		k= (k<(n-k)) ?k : (n-k);
		vector<long long int>arr(n);
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr.begin(),arr.end());
		int sum1=accumulate(arr.begin(),arr.end(),0);
		int sum2=0;
		for(int i=0;i<k;i++){
			sum2+=arr[i];
		}
		cout<<(sum1-sum2)-sum2<<"\n";

	}
}
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main(){
	ios::sync_with_stdio(false);
	int t;
	cin>>t;
	int x=0;
	
	while(t--){
		vector<int> v;
		int n,temp;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>temp;
			v.push_back(temp);
		}
		int max=*max_element(v.begin(),v.end());
		int min=*min_element(v.begin(),v.end());
		int sum=accumulate(v.begin(),v.end(),0);
		cout<<sum-n*min<<"\n";
	}
}
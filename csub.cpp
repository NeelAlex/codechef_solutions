#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int n,c;
		cin>>n;
		string str;
		cin>>str;
		c=0;
		for(int i=0;i<n;i++){
			if(str[i]=='1'){
				c++;
			}
		}
		long long int res=(c*(c+1))/2;
		cout<<res<<"\n";
	}
}
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int t,x,y,k,n,a,b;
	cin>>t;
	
	while(t--){
		vector<long long int>p,c;
		bool found=false;
		cin>>x>>y>>k>>n;
		x=x-y;
		for(int i=0;i<n;i++){
			cin>>a>>b;
			if(a>=x && b<=k){
				found=true;
            }
		}
		cout<<(found? "LuckyChef": "UnluckyChef")<<"\n";
	}
}

#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int t,n,c,sum,temp;
	cin>>t;
	while(t--){
		cin>>n>>c;
		sum=0;
		for(int i=0;i<n;i++){
			cin>>temp;
			sum+=temp;
		}
		if(sum>c){
			cout<<"No\n";
		}
		else{
			cout<<"Yes\n";
		}
	}
}
while t-- :
	inp=raw_input()
	inp=inp.split(" ")
	sum=0
	for i in range inp[0]:
		temp=int(raw_input)
		sum+=temp
	if(sum>inp[1]):
		print("No\n")
	else:
		print("Yes\n")
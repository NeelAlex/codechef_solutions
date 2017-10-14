#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	int arr[12]={1,2,4,8,16,32,64,128,256,512,1024,2048};
	long long int n;
	cin>>t;
	while(t--){
		cin>>n;
		int res=0;
		while(n!=0){
			if(n>2048){
				n-=2048;
				res++;
			}
			else{
				for(int i=0;i<12;i++){
					if(n==arr[i]){
						n-=arr[i];
						res++;
						break;
					}
					if (n<arr[i]){
						n-=arr[i-1];
						res++;
						break;
					}


				}
			}
		}
		cout<<res<<"\n";
	}
}
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		int flag=0;
		int l[27]={0};
		int r[27]={0};
		for(int i=0;i<str.size()/2;i++){
			l[str[i]-'a']++;
		}
		for(float i=ceil(str.size()/2.0);i<str.size();i++){
			r[str[i]-'a']++;
		}
		
		for(int i=0;i<27;i++){
			if(l[i]!=r[i]){
				flag=1;
			}
		}
		if(flag==1){
			cout<<"NO\n";
		}
		else{
			cout<<"YES\n";
		}
		

	}
}
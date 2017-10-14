#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	long long int n;
	while(t--){
		cin>>n;
		long long int inp;
		vector<long long int> arr;
		for(int i=0;i<n;i++){
			cin>>inp;
			auto it =upper_bound(arr.begin(),arr.end(),inp);

			if(it==arr.end()){
				arr.push_back(inp);
			}
			else{
				(*it)=inp;
			}

	    }




		cout<<arr.size()<<" ";
		for(int k=0;k<arr.size();k++){
			cout<<arr[k]<<" ";
		}
		cout<<"\n";
	}

}
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>a){
	int i=0;
	int j=a.size()-1;
	long long int left=a[0],right=a[j];
	int ans=0;
	while(i<j){
		if(left<right){
			++i;
			left+=a[i];
			++ans;
		}
		else if(left>right){
			--j;
			right+=a[j];
			++ans;
		}
		else{
			++i;
			--j;
			left+=a[i];
			right+=a[j];
		}
	}
	return ans;
}
int main() {
	int n;
	cin>>n;
	while(n--){
		int m;
		cin>>m;
		vector<int>a(m,0);
		for(auto &i:a){
			cin>>i;
		}
		cout<<solve(a)<<endl;
	}
	return 0;
}
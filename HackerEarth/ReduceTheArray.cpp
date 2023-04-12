#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int cal(int a,int b){
	int c = (a+b)+(a|b)-(a&b);
	// cout<<c<<endl;
	return c;
}
int solve(vector<int>a){
	sort(a.begin(),a.end());
	int ans=0;
	for(int i=1;i<a.size();i++){
		ans|=cal(a[0],a[i]);
	}
	return ans;
}
int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	vector<int>a(num,0);
	for(auto &i:a){
		cin>>i;
	}
	cout<<solve(a)<<endl;
	return 0;
}
#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	while(num--){
		int m;
		cin>>m;
		long long int ans=0;
		for(long long int i=1;i<=m;i++){
			ans+=(i*(i+1))/2;
		}
		cout<<ans<<endl;
	}
	return 0;
}

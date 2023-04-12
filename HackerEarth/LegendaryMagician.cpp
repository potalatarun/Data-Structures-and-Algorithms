#include<bits/stdc++.h>
using namespace std;

int solve (int n, vector<int> A, vector<int> B) {
   // Write your code here
   pair<int,int>a[n];
   for(int i=0;i<n;i++){
    a[i].first=A[i];
    a[i].second=B[i];
   }
   int m=0,ans=0;
   sort(a,a+n);
   for(int i=0;i<n;i++){
    if(a[i].first>m){
        ans++;
        m=a[i].second;
    }
    else{
        m=min(m,a[i].second);
    }
   }
   return ans;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int n;
        cin >> n;
        vector<int> A(n);
        for(int i_A = 0; i_A < n; i_A++)
        {
        	cin >> A[i_A];
        }
        vector<int> B(n);
        for(int i_B = 0; i_B < n; i_B++)
        {
        	cin >> B[i_B];
        }

        int out_;
        out_ = solve(n, A, B);
        cout << out_;
        cout << "\n";
    }
}
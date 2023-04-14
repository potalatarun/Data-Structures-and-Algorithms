#include<bits/stdc++.h>
using namespace std;

long long solve (int N, int start, int finish, vector<int> Ticket_cost) {
   // Write your code here
//    forward
    long long int forward=0;
    // for(int i=start;i<finish;i++){
    //     int j=i%N;
    //     forward+=Ticket_cost[j];
    // }
    int j=start-1;
    while(j!=finish-1){
        // cout<<j;
        j=j%N;
        forward+=Ticket_cost[j];
        j++;
        // if(j>=N)j=0;
    }
    // cout<<endl;
    long long int backword=0;
    j=start-1;
    while(j!=finish-1){
        // cout<<j;
        int value=j;
        value--;
        if(value<0){
            value=N-1;
        }
        j=j%N;
        backword+=Ticket_cost[value];
        j--;
        if(j<0){j=N-1;}
    }
    return min(backword,forward);
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    int start;
    cin >> start;
    int finish;
    cin >> finish;
    vector<int> Ticket_cost(N);
    for(int i_Ticket_cost = 0; i_Ticket_cost < N; i_Ticket_cost++)
    {
    	cin >> Ticket_cost[i_Ticket_cost];
    }

    long long out_;
    out_ = solve(N, start, finish, Ticket_cost);
    cout << out_;
}
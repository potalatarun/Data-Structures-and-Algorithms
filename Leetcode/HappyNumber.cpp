class Solution {
public:
    map<int,int>mp;
    int sum(int n){
        int m=0;
        for(int i=n;i>0;i/=10){
            m+=((i%10)*(i%10));
        }
        return m;
    }
    bool isHappy(int n) {
        if(n==1)return true;
        if(mp[n]>1)return false;
        int k=sum(n);
        mp[k]++;
        return isHappy(k);
    }
};
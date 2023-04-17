class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int i=0,max_value=0;
        while(i<candies.size()){
            max_value=max(max_value,candies[i]);
            i++;
        }
        i=0;
        int n=candies.size();
        vector<bool>results(n,false);
        while(i<candies.size()){
            if(candies[i]+extraCandies >= max_value){
                results[i]=true;
            }
            else{
                results[i]=false;
            }
            i++;
        }
        return results;
    }
};
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,j=0;
        string merged="";
        while(i<word1.length() or j<word2.length()){
            if(i<word1.length()){
                merged+=word1[i];
                i++;
            }
            if(j<word2.length()){
                merged+=word2[j];
                j++;
            }
        }
        return merged;
    }
};
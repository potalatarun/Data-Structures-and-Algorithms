class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top=0,down=matrix.size()-1,left=0,right=matrix[0].size()-1;
        vector<int>a;
        int row=matrix.size();
        int col=matrix[0].size();
        // vector<vector<int>>a(row,vecotr<int>(col,-1));
        if(row==1){
            vector<int>a;
            for(int i=0;i<col;i++){
                a.push_back(matrix[0][i]);
            }
            return a;
        }
        if(col==1){
            vector<int>a;
            for(int i=0;i<row;i++){
                a.push_back(matrix[i][0]);
            }
            return a;
        }
        while((left<=right and top<=down )){
            // go right
            int i=left;
            while(i<=right){
                a.push_back(matrix[top][i]);
                i++;
            }
            top++;
            // go down
            int j=top;
            while(j<=down){
                a.push_back(matrix[j][right]);
                j++;
            }
            right--;
            // go left
            int k=right;
            while(k>=left){
                a.push_back(matrix[down][k]);
                k--;
            }
            down--;
            // go up
            int l=down;
            while(l>=top){
                a.push_back(matrix[l][left]);
                l--;
            }
            left++;
        }
        while(row*col != a.size()){
            a.pop_back();
        }
        return a;
    }
};
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int p=matrix.size()-1;
        int rowdel = matrix.size()-1;
        vector<vector<int>>rotate;
        rotate = matrix;
        
    for(int i=0;i<rotate.size();i++){
        for(int j=0;j<rotate.size();j++){
            matrix[j][p] = rotate[i][j];
        }
        p--;
    }
    }
};

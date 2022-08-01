class Solution {
public:

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row = matrix.size();
    int col = matrix[0].size();
    // Starting from top right element  hence 
    int i = 0;
    int j = col-1;
	
    while(i<row && j>=0){
        if(matrix[i][j]==target){
            return true;
        }
        else if(matrix[i][j] > target){
            j--;
        }
        else{
           i++;                
        }
    }
    
    return false;
}****
};
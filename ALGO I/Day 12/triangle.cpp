class Solution {
public:
  /*  int minimumTotal(vector<vector<int>>& triangle) {
        
    }*/
    
   int minimumTotal(vector<vector<int>>& tri) {
    for(int i=tri.size()-2;i>=0;i--){
        for(int j=0;j<=i;j++){
            tri[i][j]+=min(tri[i+1][j],tri[i+1][j+1]);
        }
    }
    return tri[0][0];
} 
};
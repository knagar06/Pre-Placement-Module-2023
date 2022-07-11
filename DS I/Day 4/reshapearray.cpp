class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<int> vt;
        for(int i=0;i<mat.size();i++){
            vt.insert(vt.end(),mat[i].begin(),mat[i].end());
        }
        if((r*c)!=vt.size()){
            return mat;
        }
        vector<vector<int>> temp;
        int count=0;
        for(int i=0;i<r;i++){
            vector<int> vtt;
           for(int j=0;j<c;j++){
               vtt.push_back(vt.at(count));
               count++;
           }
            temp.push_back(vtt);
            vtt.clear();
        }
        return temp;
    }
};
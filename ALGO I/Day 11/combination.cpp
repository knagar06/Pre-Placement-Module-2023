class Solution {
private:
    void solve(vector<vector<int>>& ans, vector<int> temp, int index,int n ,int k){
        if (temp.size() == k){
            ans.push_back(temp);
            return;
        }
        for (int i=index; i<n; i++){
            temp.push_back(i+1);
            solve(ans, temp, i+1, n ,k);
            temp.pop_back();
        }
    }
    
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> temp;
        int index = 0;
        solve (ans, temp, index, n ,k);
        return ans;
    }
};
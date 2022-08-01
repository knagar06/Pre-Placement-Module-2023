class Solution {

void Solve(vector<int> &ans, vector<int> prev, int row, int &n)
{
    if(row>n)
    {
        ans = prev;
        return ;
    }
    
    vector<int> temp;
    temp.push_back(1);
    
    for(int i = 1 ; i< row; i++)
        temp.push_back(prev[i]+prev[i-1]);
    
    temp.push_back(1);
    Solve(ans,temp , row+1, n );
}
public:
vector getRow(int rowIndex) {

    vector<int> ans ,  prev;
    prev.push_back({1});
    
    
    Solve(ans, prev, 1 , rowIndex);
    
    return ans;
}
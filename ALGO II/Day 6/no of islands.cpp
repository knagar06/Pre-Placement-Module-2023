class Solution {
public:
    vector<int> row={0,0,-1,1};
    vector<int> col={-1,1,0,0};
    void bfs(vector<vector<char>>& grid,int r,int c,int n,int m,vector<vector<int>> &vis)
    {   
        vis[r][c]=1;
        int r_new=-1;
        int c_new=-1;
        queue<pair<int,int>> q; 
        q.push({r,c});
        while(!q.empty())
        {
            auto x=q.front();
            q.pop();
            for(int i=0;i<4;i++)
            {
                r_new=x.first-row[i];
                c_new=x.second-col[i];
                if(r_new>=0 && r_new<n && c_new>=0 && c_new<m&& !vis[r_new][c_new] && grid[r_new][c_new]=='1'){
                    q.push({r_new,c_new});
                    vis[r_new][c_new]=1;
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        //here each component is an island
        vector<vector<int>> vis(r,vector<int>(c, 0));
        int ans=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
               if(grid[i][j]=='0'){
                    continue;
                }
                else{
                    if(!vis[i][j]){
                        ans++;
                        bfs(grid,i,j,r,c,vis);
                    }
            }
        }
    }
        return ans;
    }   
};
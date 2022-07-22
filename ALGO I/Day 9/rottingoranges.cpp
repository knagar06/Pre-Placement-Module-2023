class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int mintime=0;                                                              //minimum time for all to rot.
        vector<vector<int>> time(grid.size(),vector<int>(grid[0].size(),-1));       //2-D time array stores minimum time required for any i,j'th fruit to rot, initialised by -1
        bool found2=false,found1=false;                                             // if we have found 2 and have found 1.
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){                                                  // yes we found 1.
                    found1=true;
                }
                if(grid[i][j]==2){                                                  //yes we found 2. so rot it.
                    found2=true;
                    startrot(grid,time,i,j+1,1);                                    //startrot function called for all adjacents possible.
                    startrot(grid,time,i,j-1,1);
                    startrot(grid,time,i-1,j,1);
                    startrot(grid,time,i+1,j,1);
                }
            }
        }
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1 && time[i][j]==-1)return -1;                       //if for some fruit we have time of rot -1 then it won't rot so return -1
            }
        }
        if(!found1 && !found2)return 0;                                             // if there is no fruit return 0;
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                mintime=max(mintime,time[i][j]);                                    // mintime is max of all possible values of rottings stored.
            }
        }
        return mintime;
    }
    
    void startrot(vector<vector<int>>& grid,vector<vector<int>>& time,int i,int j,int t){           //rot function
        if(i<0||j<0||i>=grid.size()||j>=grid[0].size()||grid[i][j]==0||grid[i][j]==2)return;        //if index out of bounds or we recieve a rot or a empty cell return.(because every rot cell calls its adjacents so rot cell is rot at time 0 and all others after that time, so no need to check any other cell).
        if(time[i][j]!=-1 && time[i][j]<=t)return;                                                  //if a fruit can rot from to different paths then min time is taken.
        else time[i][j]=t;
        startrot(grid,time,i,j+1,t+1);                                                              //call adjacents.
        startrot(grid,time,i,j-1,t+1);
        startrot(grid,time,i-1,j,t+1);
        startrot(grid,time,i+1,j,t+1);
    }
};
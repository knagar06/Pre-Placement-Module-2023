class Solution {
public:
    int startindex; // this is the starting index of longest palindromic sub-string
    int maxlength=-1; // this is the lenght of sub-string
    int dp[1001][1001];
    
    bool findans(string &s,int l,int r)
    {
        if(l>r)  //base considition
            return true;  
        if(l==r) // if maxlengt is -1 so we will intialize it with index and length 0
        {
            if(maxlength<0)
            {
                maxlength=0;
                startindex=l; 
            }
            return true;
        }
        
        if(dp[l][r]!=-1)
            return dp[l][r];
        
        if(s[l]==s[r] && findans(s,l+1,r-1))
        {
            // if l and r have same character then we will make the recursize call with l+1 and r-1
            if((r-l)>maxlength)
            {
                maxlength=(r-l);
                startindex=l; 
            }
            // returing the true for the current state
            return dp[l][r]=true;
        }
        
        
        // if l and r are not same then will update the maxlength if 
        // call return true for its subproblem
        if(findans(s,l+1,r))
        {
            if((r-(l+1))>maxlength)
            {
                maxlength=(r-(l+1));
                startindex=l-1; 
            }
                
        }
        
        if(findans(s,l,r-1))
        {
            if(( (r-1)-l)>maxlength)
            {
                maxlength=(r-1)-l;
                startindex=l; 
            }
        }
        
        // and then return false for the current state 
        return dp[l][r]=false;
        
    }
    string longestPalindrome(string s) {
        memset(dp,-1,sizeof(dp));
        findans(s,0,s.size()-1); // calling with two pointers left and right (0,n-1)
        string ans=s.substr(startindex,maxlength+1);
        return ans;
    }
};
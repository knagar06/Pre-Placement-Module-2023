class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1;
        int a,maxa=0,x;
        while(l<r)
        {
            x=min(height[l],height[r]);
            a=x*(r-l);
            if(a>maxa)
                maxa=a;
            if(height[r]==x)
                r--;
            else
                l++;
        }
        return maxa;
    }
};
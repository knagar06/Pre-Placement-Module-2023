class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>tv;
        int i;
        for(i=0;i<nums.size();i++)
        {
            tv[nums[i]]+=1;
        }
            unordered_map<int,int>::iterator cr;
        int ans=0;
        for(cr=tv.begin();cr!=tv.end();cr++)
        {
            if (cr->second==1)
            ans= cr->first;
        }
        return ans;
    }
};
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
            for(int i=0;i<nums.size()-1;i++)
            {
                int j=i+1;
                if(nums[i]==nums[j])
                    return true;
            }
        return false;
    }
};
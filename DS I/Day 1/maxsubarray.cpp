class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int Max=INT_MIN;
        for(auto it:nums){
            sum+=it;
            Max=max(sum,Max);
            if(sum<0)
                sum=0;
        }
        return Max;
    }
};
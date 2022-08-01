class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1;
        while(start <= end) {
            int mid = start + (end - start) / 2;
            if(target == nums[mid])
                return mid;
            
            // First check if left part is sorted or not. If yes, then do the following
            if(nums[start] <= nums[mid]) {
                // If the target is greater than nums[start] and less than nums[mid]
                // we can say that the target lies between start and mid. So, set end = mid - 1
                // if target doesn't lie between nums[start] and nums[end], then we search from 
                // mid + 1 to end.
                if(target >= nums[start] && target <= nums[mid])
                    end = mid - 1;
                else
                    start = mid + 1;
            }
            
            else {
                // If the target is greater than nums[mid] and less than nums[end]
                // we can say that the target lies between mid and end. So, set start = mid + 1
                // if target doesn't lie between nums[start] and nums[end], then we search from 
                // start to mid - 1.
                if(target >= nums[mid] && target <= nums[end])
                    start = mid + 1;
                else
                    end = mid - 1;
            }
        }
        // If we don't find target, then return -1
        return -1;
    }
};
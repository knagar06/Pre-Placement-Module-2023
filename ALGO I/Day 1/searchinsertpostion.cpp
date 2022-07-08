class Solution {
public:
int searchInsert(vector& nums, int target) {

    return BinarySearch( nums, 0, nums.size() - 1, target );
    
}

int BinarySearch( vector<int>&nums, int start, int end, int target ) {
    
    if( start > end )
        return start;
    
    int mid = start + ( end - start ) / 2;
    
    if( nums[ mid ] == target )
        return mid;
    else if( nums[ mid ] < target )
        return BinarySearch( nums, mid + 1, end, target );
    
    return BinarySearch( nums, start, mid - 1, target );
    
}
};
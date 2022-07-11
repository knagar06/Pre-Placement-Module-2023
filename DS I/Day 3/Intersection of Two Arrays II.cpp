vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> intersectNums;
        int n1 = nums1.size(), n2 = nums2.size();
        for(int i=0; i<n1; i++){
            for(int j=0; j<n2; j++){
                if(nums1[i]==nums2[j]){
                    intersectNums.push_back(nums1[i]);
                    nums2[j] = 1001;
                    break;
                }
            }
        }
        return intersectNums;
	}
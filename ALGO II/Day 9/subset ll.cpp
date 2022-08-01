class Solution {
public:
	vector<vector<int>> subsetsWithDup(vector<int>& nums) {
		vector<int> noDup;
		vector<vector<int>> res;
		sort(nums.begin(), nums.end());
		recFunc(0, noDup, nums, res);
		return res;
	}

	void recFunc(int index, vector<int>& noDup, vector<int>& nums, vector<vector<int>>& res)
	{
		int n = nums.size();
		if(index>= n)
		{
			res.push_back(noDup);
			return;
		}

		noDup.push_back(nums[index]);
		recFunc(index+1, noDup, nums, res);

		noDup.pop_back();
		while(index+1<n && nums[index]==nums[index+1])
			index++;
		recFunc(index+1, noDup, nums, res);
	}
};
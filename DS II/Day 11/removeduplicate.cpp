class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        map<int,int>m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        int k=0;
        for(auto i:m){
            if(i.second==1){
                nums[k]=i.first;
                k++;
            }
            else{
                nums[k]=i.first;
                nums[k+1]=i.first;
                k=k+2;
            }
        }
        return k;
    }
};
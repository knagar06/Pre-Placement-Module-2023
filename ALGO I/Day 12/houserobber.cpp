class Solution {
public:
    int rob(vector<int>& v) {
        for (int i=v.size()-2; i>=0; i--) {
            if (i == v.size()-2)
                v[i] = max(v[i], v[i+1]);
            else
                v[i] = max(v[i]+v[i+2], v[i+1]);
        }
        
        return v[0];
    }
};
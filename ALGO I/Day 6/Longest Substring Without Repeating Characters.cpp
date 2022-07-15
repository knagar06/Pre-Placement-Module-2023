class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = s.length();
        vector<char> st;
        vector<int> v;
        
        for(int i=0;i<len;i++){
            auto m =find(st.begin(),st.end(),s[i]);
            if(m==st.end())
                st.push_back(s[i]);
            else{
                v.push_back(st.size());
                if(m!=st.begin())
                  st.erase(st.begin(),m+1);
                else
                  st.erase(st.begin());   
                st.push_back(s[i]);
            }        
        }
        v.push_back(st.size());
        int ans = *max_element(v.begin(),v.end());
        return ans;
    }
};

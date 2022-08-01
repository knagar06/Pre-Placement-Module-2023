class Solution {
public:
vector findRepeatedDnaSequences(string s) {
vector ans;
if(s.length()<10) return ans;
unordered_map<string,int> mp;
string ss;
for(int i=0;i<=s.length()-10;i++)
{
ss=s.substr(i,10);
mp[ss]++;
}

    for(auto it:mp)
        if(it.second>=2)
            ans.push_back(it.first);
    return ans;
}
}; 
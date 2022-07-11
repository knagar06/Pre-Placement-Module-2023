class Solution {
public:
    void reverseString(vector<char>& s) {
        int size=s.size();
        int i=0;
        
        while (i<size/2) {
            swap(s[i],s[size-i-1]);
            i++;
        }
    }
};
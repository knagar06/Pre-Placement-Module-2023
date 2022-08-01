class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry=0,sum;
        string ans;
        while(num1.size() && num2.size()){
            sum=(num1.back()-'0')+(num2.back()-'0')+carry;
            carry=sum/10;
            ans.push_back(sum%10 + '0');
            
            num1.pop_back();
            num2.pop_back();
        }
        
        while(carry || num1.size() || num2.size()){
            sum=carry+ (num1.size()? (num1.back()-'0') : 0) + (num2.size()? (num2.back()-'0') : 0);
            carry=sum/10;
            ans.push_back(sum%10 + '0');
            
            if(num1.size()) num1.pop_back();
            if(num2.size()) num2.pop_back();
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
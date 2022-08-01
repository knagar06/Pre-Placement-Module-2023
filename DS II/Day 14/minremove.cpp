class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<pair<char,int>> stack;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                stack.push({s[i],i});
            }else if(s[i]==')'){
			//treating ')' as '(' if the stack is empty
                if(stack.empty()){
                    stack.push({s[i],i});
                    continue;
                }
				//bracket matched
                if(stack.top().first=='(')
                    stack.pop();
					//bracket not matched
                else
                    stack.push({s[i],i});
            }
        }
        if(stack.empty()) return s;
		//erasing all the positions with corresponding bracket in the string to get the answer
        while(stack.empty()==0){
            s.erase(stack.top().second,1);stack.pop();
        }
        return s;
    }
};
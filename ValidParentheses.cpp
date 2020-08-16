// Time Complexity : O(N)
// Space Complexity : O(N)
// Did this code successfully run on Leetcode : Yes
// Any problem you faced while coding this : No
// Implemented using stack

class Solution {
public:
    bool isValid(string s) {
        if(s.length()==0){
            return true;
        }
        stack<char> st;
        
        for(int i=0;i<s.length();i++){
            if(s[i]=='{'){
                st.push('}');
            }else if(s[i] == '['){
                st.push(']');
            }else if(s[i] == '('){
                st.push(')');
            }else{
                if(st.empty() || st.top() != s[i]){
                    return false;
                }
                st.pop();
                }
        }
        return st.empty();
    }
};

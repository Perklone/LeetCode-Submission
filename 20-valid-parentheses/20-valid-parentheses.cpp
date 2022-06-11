class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for(int i= 0;i<s.length();i++){
            if(s[i]=='('){
                stack.push(s[i]);
            } 
            else if (s[i]==')'){
                if(stack.empty()){
                    return false;
                }
                else if(stack.top() != '(') {
                    return false;
                }
                else {
                    stack.pop();
                }
            }
            else if (s[i]=='['){
                stack.push(s[i]);
            }
            else if (s[i]== '{') {
                stack.push(s[i]);
            }
            else if (s[i]==')'){
                if(stack.empty()){
                    return false;
                }
                else {
                    stack.pop();
                }
            }
            else if (s[i]==']'){
                if(stack.empty()){
                    return false;
                }
                else if(stack.top() != '[') {
                    return false;
                }
                else {
                    stack.pop();
                }
            }
            else if (s[i]=='}'){
                if(stack.empty()){
                    return false;
                }
                 else if(stack.top() != '{') {
                    return false;
                }
                else {
                    stack.pop();
                }
            }
        }
        if(stack.empty()){
            return true;
        }
        return false;
    }
};
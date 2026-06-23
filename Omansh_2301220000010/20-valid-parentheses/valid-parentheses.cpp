class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stack;
        
        for (char c : s) {
            // If it's an opening bracket, push onto the stack
            if (c == '(' || c == '{' || c == '[') {
                stack.push(c);
            } 
            // If it's a closing bracket
            else {
                if (stack.empty()) return false;
                
                char top = stack.top();
                if ((c == ')' && top == '(') || 
                    (c == '}' && top == '{') || 
                    (c == ']' && top == '[')) {
                    stack.pop();
                } else {
                    return false;
                }
            }
        }
        
        return stack.empty();
    }
};
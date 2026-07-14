class Solution {
public:
    bool isValid(string s) {
        stack<char>c;

        for(char ch : s){
            if(ch=='(' || ch=='{' || ch=='['){
               c.push(ch);
            }
            else if(ch==')' || ch=='}' || ch==']'){
                if(c.empty()) return false;

                char top = c.top();
                c.pop();
                if((ch=='}' && top!='{') ||
                (ch==')' && top!='(') ||
                (ch == ']' && top!='[')){
                    return false;
                }
            }
        }
        return c.empty();
    }
};
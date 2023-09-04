class Solution {
public:
    bool isValid(string s) {
       /* stack<char>st;
        int n=s.size();
        int i=0;
        while(i<n){
            if(!st.empty() && st.top()=='(' && s[i]==')')
            {
                st.pop();
                i++;
             }
             else  if(!st.empty() && st.top()=='[' && s[i]==']')
            {
                st.pop();
                i++;
             }
             else  if(!st.empty() && st.top()=='{' && s[i]=='}')
            {
                st.pop();
                i++;
             }
             else {
                 st.push(s[i]);
                 i++;
             }
        }
      /*  if(st.size()>0)return false;
        return true;*/
       /* if (!st.empty()) return false;
        return true;*/
        stack<char> st;
        unordered_map<char, char> closingBrackets = {{')', '('}, {'}', '{'}, {']', '['}};

        for(char c : s)
        {
            if(c == '(' || c == '{' || c == '[')
                st.push(c);
            else if(st.empty() || st.top() != closingBrackets[c])
                return false;
            else
                st.pop();
        }

        return st.empty();
        
    }
};

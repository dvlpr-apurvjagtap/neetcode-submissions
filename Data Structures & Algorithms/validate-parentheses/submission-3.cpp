class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int i=0;
        int n= s.size();
        while(i<n){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                st.push(s[i]);
                i++;
            }else if(!st.empty() && st.top()=='('&&s[i]==')'){
                st.pop();
                i++;
            }
            else if(!st.empty() && st.top()=='['&&s[i]==']'){
                st.pop();
                i++;
            }
            else if(!st.empty() && st.top()=='{'&&s[i]=='}'){
                st.pop();
                i++;

            }else{
                return false;
            }
        }
        return st.empty();
    }
};

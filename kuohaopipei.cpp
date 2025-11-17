//对称匹配类题目用栈做非常适合
class Solution{
public:
    bool isValid(string s){
        if(s.size()%2！=0)return false;
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('st.push(')'));
            else if(s[i]=='{')st.push('}');
            else if(s[i]=='[')st.push(']');

            else if(st.empty()||st.top()!=s[i])return false;//匹配中栈空，返回false，返回的不是栈顶匹配的，返回false
            else st.pop();//能匹配，弹出一个
        }
        return st.empty();
    }
};
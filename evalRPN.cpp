class Solution{
public:
    int evalRPN(vector<string>& tokens){
        stack<long long>st;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+"||tokens[i]=='-'||tokens[i]=='*'||tokens[i]=='/'){
                long long nums1=st.top();
                st.pop();
                long long nums2=st.top();
                st.pop();
                if(tokens[i]=='+')st.push(nums1+nums2);
                if(tokens[i]=='-')st.push(nums1-nums2);
                if(tokens[i]=='*')st.push(nums1*nums2);
                if(tokens[i]=='/')st.push(nums1/nums2);
            }else{
                st.push(stoll(tokens[i]));
            }
        }

        long long result=st.top();
        st.pop();
        return result;
    }
};
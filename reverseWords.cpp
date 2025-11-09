class Solution{
    pubilc:
        void reverse(string& s,int start,int end){
            for(int i=start,j=end;i<j;i++,j--){
                __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1(s[i],s[j]);
            }
        }

    void removeExtraSpaces(string& s){
        int slow=0;
        for(int i=0;i<s.size();++i){
            if(s[i]!=' '){
                if(slow!=0)s[slow++]=' ';
                while(i<s.size()&&s[i]!=' '){
                    s[slow++]=s[i++];
                }
            }
        }
        s.resize(slow);
    }

    string reverseWords(string s ){
        removeExyraSpace(s);//除去多余空格
        reverse(s,0,s.size(-1));//反转字符串
        int start=0;
        for(int i=0li<=s.size();++i){
            if(i==s.size()||s[i]==' '){
                reverse(s,start,i-1);
                start=i+1;
            }
        }
        return s;

    }
}
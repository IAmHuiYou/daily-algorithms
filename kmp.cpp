//kmp算法解决的问题：一个字符串是否在另一个字符串中出现 
//关键是找到【子串】的最长相等前后缀//子串是模式串的子串
//关键是前缀表（next或profix）
//前缀：包含首字母不包含尾字母的所有子串
//后缀：包含尾字母不包含首字母的所有子串

//getnext函数
//i是后缀末尾
//j是前缀末尾
//前后缀不相同：j回退到前一位下标对应的位置j=next【j-1】（j>0）（while）
//前后缀相同的情况：j++,next++,i++

void getNext(int *next,const string& s){
    int j=0;
    next[0]=0;
    for(int i=1;i<s.size();i++){
        while(j>0&&s[i]!=s[j]){
            j=next[j-1];
        }
        if(s[i]==s[j]){
            j++;
        }
        next[i]=j;
    }
}

int strStr(string haystack,string needle){
    if(needle.size()==0){
        return 0;
    }
    vector<int> next(needle.size());
    getNext(&next[0],needle);
    int j=0;

    for(int i=0;i<haystack.size(),i++){
        while(j>0&&haystack[i]!=needle[j]){
            j=next[j-1];
        }
        if(haystack[i]==needle[j]){
            j++;
        }
        if(j==needle.size()){
            return(i-needle.size()+1);
        }
    }
    return -1;
}
class Solution{
public:
    void reverse(string& s ,int start ,int end){
        for(int i=start,j=end;i<j;i++,j--){
            swap(s[i],s[j]);
        }
    }
void removeExtraSpace(string& s){
    int slow=0;
    for(int i=0;i<s.size();i++){
        if(s[i]!=''){
            if(slow!=0) s[slow++] = ' ';
        }
    }
}

} 
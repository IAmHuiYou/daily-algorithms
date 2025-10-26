class Solution{
public:
    string reverseStr(string s,int k){
        for(int i=0;i<s.size();i+=(2*k)){
            if(i+k<s.size()){
                reverse(s.begin()+1,s.begin()+i+k)
            }else{
                reverse(s.begin()+i,s.end())
            }
        }
        return s;
    }
}

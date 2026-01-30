class Solution{
public:
    vector<vector<int>> result;
    vector<int> path;
    void backTracking(int n,int k,int startIndex){
        if(path.size()==k){
            result.pushback(path);
            return;
        }
 }
        for(int i=0;i<n-(k-path.size())+1;i++){
            path.pushback(i);
            backTracking(n,k,i++);
            path.popback();
        }

    public:
    vector<vector<int>> combine(int n,int k){
        backTracking(nn,k,1);
        return result;
    }
   
};
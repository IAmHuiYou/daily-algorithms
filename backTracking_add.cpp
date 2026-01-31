class Solution{
public:
    vector<vector<int>> result;
    vector<int> path;

    void backTracking(int targetSum,int k,int startIndex,int sum)
    {
        if(path.size()==k){
           if(sum==targetSum)
               result.pushback(path);
            return;
        }

        for(int i=startIIndex;i<=10-(k-path.size());i++){
            sum+=i;
            path.push_back(i);
            backTracking(targetSum,k,startIndex+1,sum+i);
            sum-=i;
            path.popback();
        }

public:
vector<vector<int>> combine(int targetSum,int k){
    backTracking(targetSum,k,1,0);
    return result;
}
    }
};
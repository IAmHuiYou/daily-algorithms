class Solution{
public:
    //小顶堆
    class mycomparison{
        bool operator()(const pair<int,int>& lhs,const pair<int,int>&rhs){//const表示变量只读
            return lhs.second>rhs.second;//小顶堆用大于
        }
    };
    vector<int> topKFrent(vector<int>& nums,int k){
        //统计频率
        unordered_map<int,int>map;,//<数字，次数>
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }

        priority_queue<pair<int,int>,vector<pair<int,int>>,mycomparision>pri_que;

        for(unordered_map<int,int>::iterator it=map.begin();it!=map.end();it++){
            pri_que.push(*it);
            if(pri_que.size()>k){
                pri_que.pop();
            }
        }

        vector<int> result(k);
        for(int i=k-1;i>=0;i--){
            result[i]=pri_que.top().frist;
            pri_que.pop();
        }
        return result;
    }

};

#include<deque>
using namespace std;
class Solution{
private:
    class MyQueue:{
        deque<int>que;//deque是双端队列,头尾都可以插入删除

    void pop(int value){
        if(!que.empty()&&value==que.front()){
            que.pop_front();
        }

    }

    void push(int value){
        while(!que.empty()&&value>que.back()){
            que.pop_back();
        }
        que.push_back(value);
    }

    int front(){
        return que.front();
    }
};

public:
    vector<int>maxSlidingWindow(vector<int>&nums,int k){
        MyQueue que;
        vector<int> result;
        for(int i=0;i<k;i++){
            que.push(nums[i]);
        }
        result.push_back(que.front());
        for(int i=k;i<nums.size();i++){
            que.pop(nums[i-k]);
            que.push(nums[i]);
            result.push_back(que.front());
        }
        return result;
    }
    };

    //双端队列操作：push_back push_front pop_back pop_front
    
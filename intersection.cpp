
#include<vector>
#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;
//哈希表
//set是默认排序的哈希表
//unordered_set是无序的哈希表，读写效率最高
//带set的，数据都不重复

class Solution{
public:
    vector<int> intersection(vector<int>& nums1,vector<int>& nums2){
        unordered_set<int> result_set;//存结果，用set去重
        unordered_set<int> nums_set(nums1.begin(),nums1.end());//  把nums1转成set
        for(int num:nums2){
            if(nums_set.find(num)!=nums_set.end()){
                result_set.insert(num);
            }
        }
        return vector<int>(result_set.begin(),result_set.end());
    }
};

int main(){
    vector<int> nums1={1,2,2,1};
    vector<int>nums2={1,2,2,3,4,1};

    Solution solution;
    vector<int> result=solution.intersection(nums1,nums2);

    for(int num:result){
        cout<<num<<" ";
    }
    cout<<endl;

    return 0;
};
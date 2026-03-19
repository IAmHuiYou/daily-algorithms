# 补卡Day2|**209.长度最小的子数组**， **59.螺旋矩阵II**，**区间和**，**开发商购买土地**

## 209.长度最小的子数组

[209.长度最小的子数组 | 代码随想录](https://programmercarl.com/0209.长度最小的子数组.html)

## 我的思路

这题应该用滑动和伸缩的窗口来写吧，一个start，一个end，当不足target的时候end++，大于tartget就存一个长度。然后start收缩，继续end++直到大于target

## 问题总结

1.对于需要取最小的result，result赋初值的时候一定要赋最大。`INT32_MAX`

## 卡的思路

## 我的代码

```
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int start=0;
        int sum=0,result=INT32_MAX;
        for(int end=0;end<nums.size();end++){
            sum+=nums[end];
            while(sum>=target){
                result=result<end-start+1?result:end-start+1;
                sum-=nums[start++];
            }
        }
        return result==INT32_MAX?0:result;
        
    }
};
```



## 997.有序数组的平方

|笔记链接|

## 我的思路

## 问题总结

## 卡的思路

## 我的代码

##  **59.螺旋矩阵II**

|笔记链接|

## 我的思路

## 问题总结

## 卡的思路

## 我的代码

## 997.有序数组的平方

|笔记链接|

## 我的思路

## 问题总结

## 卡的思路

## 我的代码

## 时长   
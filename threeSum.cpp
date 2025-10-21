class{
public:
    vector<vector<int>> threeSum(vector<int>& nums){
        vector<vecotr<int>> result;
        sort(nums.begin(),nums.end())


        //找出a+b+c=0
        //a=nums[i],b=nums[left],c=nums[right]
        for(int i=0;i<nums.size();i++){
            //如果排序后第一个元素已经大于零，加起来不能等于0
            if(nums[i]>0){
                return result;
            }

            if(i>0&&nums[i]==nums[i-1]){
                continue;
            }//对a进行去重

            int left=i+1;
            int right=nums.size()-1;
            while(right>left){
                if(nums[i]+nums[left]+nums[right]>0)right--;
                else if(nums[i]+nums[left]+nums[right]<0)left++;
                else{
                    result.push_back(vector<int>{nums[i],nums[left],nums[right]});
                    while(right>left&&nums[right]==nums[right-1])right--;
                    while(right>left&&nums[left]==nums[left+1])left++;
                    right--;
                    left--;
                }
            }
            return result;

        };
    }
}
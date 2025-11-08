class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int x=nums[i];
            if(i!=0 && x==nums[i-1]){
                continue;
            }
            if(x > 0){
                break;
            }
            int start=i+1;
            int end=nums.size()-1;
            while(start < end){
                int sum=nums[start]+nums[end]+x;
                if(sum==0){
                    ans.push_back({x,nums[start],nums[end]});
                    start++;
                    end--;
                    while(start < end && nums[end+1]==nums[end]){
                        end--;
                    }
                    while(start < end && nums[start-1]==nums[start]){
                        start++;
                    }
                }else if(sum > 0){
                    end--;
                }else{
                    start++;
                }
            }
        }
        return ans;
    }
};
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        int n=nums.size();

        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
        int left=i+1;
        int right=n-1;

        if(i>0 && nums[i]==nums[i-1]) continue;

        while(left<right){
            if(nums[i]+nums[left]+nums[right]==0){
                ans.push_back({nums[left],nums[right],nums[i]});

                left++;
                right--;
                while(left<right && nums[left]==nums[left-1]) left++;
                while(left<right && nums[right]==nums[right+1]) right--;

            }else if(nums[i]+nums[left]+nums[right]>0){
                right--;
            }else{
                left++;
            }
        }
        }
        return ans;
    }
};

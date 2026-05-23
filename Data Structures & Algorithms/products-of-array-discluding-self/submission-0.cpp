class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>output(n,1);
        int start=1;
        // left to right 
        for(int i=0;i<n;i++){
            output[i]=start;
            start=start*nums[i];
        }
        // right to left 
        int next=1;
        for(int i=n-1;i>=0;i--){
            output[i]*=next;
            next=next*nums[i];
        }
        return output;
    }
};

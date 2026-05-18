class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>map;
        for(int num:nums){
            map[num]++;
        }
        for(auto & it:map){
            if(it.second > 1) return true;
        }
        return false;
    }
};
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>map;
        int n=nums.size();
        for(int i:nums){
            map[i]++;
        }
        for(auto &i:map){
            if(i.second>1){
                return i.first;
            }
        }
        return -1;
    }
};

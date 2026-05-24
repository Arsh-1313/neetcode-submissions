class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxLength=0;
        unordered_set<int>map(nums.begin(),nums.end());
        for(int num:map){
            if(map.find(num-1)==map.end()){
                int curr=num;
                int len=1;
                while(map.find(curr+1)!=map.end()){
                    curr++;
                    len++;
                }
                maxLength=max(maxLength,len);
            }
        }
        return maxLength;
    }
};

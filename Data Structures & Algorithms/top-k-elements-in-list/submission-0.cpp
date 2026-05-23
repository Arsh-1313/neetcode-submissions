class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // map 
        unordered_map<int,int>map;
        for(int i:nums){
            map[i]++;
        }
        priority_queue<pair<int,int>>pq;
        // freq and element
        for(auto &it:map){
            int first=it.first;
            int second=it.second;

            pq.push({second,first});
        }
        vector<int>ans;
        while(k--){
            int top=pq.top().second;
            pq.pop();
            ans.push_back(top);
        }return ans;
    }
};

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0) return 0;
        unordered_map<char,int>map;
        int left=0;
        int right=0;
        int n=s.length();

        int maxLen=INT_MIN;
        while(right<n){
            map[s[right]]++;

                while(map[s[right]]>1){
                    map[s[left]]--;
                    left++;
                }
            maxLen=max(right-left+1,maxLen);
            right++;
        }
        return maxLen;
    }
};

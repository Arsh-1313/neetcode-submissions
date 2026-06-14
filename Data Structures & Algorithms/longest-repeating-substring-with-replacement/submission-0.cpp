class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>map;
        int left=0;
        int right =0;
        int n=s.length();

        int maxlen=INT_MIN;
        int maxfreq=INT_MIN;

        while(right<n){
            map[s[right]]++;

            maxfreq=max(maxfreq,map[s[right]]);

            while((right-left+1)-maxfreq>k){
                map[s[left]]--;
                left++;
            }
            maxlen=max(maxlen,right-left+1);
            right++;
        }
        return maxlen;
    }
};

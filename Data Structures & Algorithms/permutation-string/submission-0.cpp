class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.length();
        int m=s2.length();


        if(n>m) return false;
        vector<int>map1(26,0);
        vector<int>map2(26,0);

        for(int i=0;i<n;i++){
            map1[s1[i]-'a']++;
        }
        for(int i=0;i<n;i++){
            map2[s2[i]-'a']++;
        }

        if(map1==map2) return true;

        for(int i=n;i<m;i++){
            map2[s2[i]-'a']++;  // adding element 
            map2[s2[i-n]-'a']--;  // removing element

            if(map1==map2) return true;
        }
        return false;
    }
};

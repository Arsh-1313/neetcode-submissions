class Solution {
public:
    bool solve(vector<int>& piles,int k,int h){
        int count=0;
        int n=piles.size();
        for(int i=0;i<n;i++){
            count+=(piles[i]+k-1)/k;
        }
        if(count>h){
            return false;
        }
        return true;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());

        int ans=INT_MAX;
        while(low<= high){
            int mid=low+(high-low)/2;
            if(solve(piles,mid,h)){
                ans=min(mid,ans);
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};

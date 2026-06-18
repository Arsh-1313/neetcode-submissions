class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=cost.size();
        int sum=0;
        for(int i:cost){
            sum+=i;
        }
        int totalGas=0;
        for(int i:gas){
            totalGas+=i;
        }
        if(sum>totalGas){
            return -1;
        }
        int start=0;
        int difference=0;
        for(int i=0;i<n;i++){

            difference+=(gas[i]-cost[i]);
            if(difference<0){
                start=i+1;
                difference=0;
            }
        }
        return start;

    }
};

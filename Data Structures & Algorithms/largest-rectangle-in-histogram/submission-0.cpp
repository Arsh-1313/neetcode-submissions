class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        int maxArea=INT_MIN;
        stack<int>st;
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>heights[i]){
                int element=st.top();
                st.pop();

                int nse=i;
                int pse=st.empty() ? -1 : st.top();

                int width=nse-pse-1;
                int area= heights[element]* width;
                maxArea=max(maxArea,area);
            }
            st.push(i);

        }
        while(!st.empty()){
            int element=st.top();
            st.pop();

            int nse=n;
            int pse=st.empty() ? -1 : st.top();

            int width=nse-pse-1;
            int area=heights[element]*width;
            maxArea=max(maxArea,area);
        }
        return maxArea;
    }
};

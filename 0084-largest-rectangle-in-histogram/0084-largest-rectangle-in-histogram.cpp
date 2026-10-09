class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        stack<int>st;
        int ans=0;
        for(int i=0;i<=n;i++){
            int ht=i==n?0:heights[i];
            while(!st.empty() && ht<heights[st.top()]){
                int h=heights[st.top()];
                st.pop();
                int wt=st.empty()?i:i-st.top()-1;
                ans=max(ans,h*wt);
            }
            st.push(i);
        }
        return ans;
    }
};
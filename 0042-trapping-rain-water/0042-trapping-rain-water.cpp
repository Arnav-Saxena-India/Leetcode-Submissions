class Solution {
public:
    int trap(vector<int>& height) {
        stack<int>st;
        int n=height.size();
        int ans=0;
        for(int i=0;i<n;i++){
            while(!st.empty() && height[i]>height[st.top()]){
                int h=height[st.top()];
                st.pop();
                if(st.empty())break;
                int w=i-st.top()-1;
                ans+=(min(height[i],height[st.top()])-h)*w;
            }
            st.push(i);
        }
        return ans;
    }
};
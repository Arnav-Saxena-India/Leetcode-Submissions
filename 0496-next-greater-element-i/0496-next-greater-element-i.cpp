class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        for(int i=0;i<nums2.size();i++){
            st.push(nums2[i]);
        }
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            stack<int>s=st;
            int mx=-1;
            while(s.top()!=nums1[i]){if(s.top()>nums1[i])mx=s.top();s.pop();}
            ans.push_back(mx);
        }
        return  ans;
    }
};
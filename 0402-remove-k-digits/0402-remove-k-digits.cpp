class Solution {
public:
    string removeKdigits(string num, int k) {
        string ans="";
        for(char c:num){
            while(ans.length()>0 && ans.back()>c && k>0){
                ans.pop_back();
                k--;
            }
            ans.push_back(c);
        }
        while(k>0 && ans.length()>0){
            ans.pop_back();k--;
        }
        int st=0;
        while(st<ans.length() && ans[st]=='0')st++;
        ans=ans.substr(st);
        return ans.empty()?"0":ans;

    }
};
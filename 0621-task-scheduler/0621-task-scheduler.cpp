class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int tt=0;
        unordered_map<int,int>mp;
        for(auto x:tasks)mp[x-'A']++;
        priority_queue<int>pq;
        for(auto it:mp){
            pq.push(it.second);
        }
        while(!pq.empty()){
            int cycle=n+1;
            vector<int>temp;
            int tc=0;
            while(cycle>0 && !pq.empty()){
                int curr=pq.top();pq.pop();
                if(curr>1) temp.push_back(curr-1);
                tc++;cycle--;
            }
            for(auto x:temp)pq.push(x);
            tt+=pq.empty()?tc:n+1;
        }
        return tt;

    }
};
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        //x,y -->y-x || 0
        priority_queue<int>pq;
        for(int i=0;i<stones.size();i++){
            pq.push(stones[i]);
        }
        while(pq.size()>1){
            int y=pq.top();pq.pop();
            int x=pq.top();pq.pop();
            if(x==y)continue;
            else{
                pq.push(y-x);
            }
        }
        return (pq.size()>0)?pq.top():0;
    }
};
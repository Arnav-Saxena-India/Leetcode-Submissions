class Solution {
public:
    int value(int x,int y){
        return x*x+y*y;
    }
    struct item{
        int dist;
        int index;
        bool operator<(const item& b) const {
        return dist > b.dist; 
        }
    };
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<item>pq;
        for(int i=0;i<points.size();i++){
            int x=points[i][0];int y=points[i][1];
            pq.push({value(x,y),i});
        }
        vector<vector<int>>ans;
        int cnt=0;
        while(cnt<k){
            auto it=pq.top();pq.pop();
            ans.push_back(points[it.index]);
            cnt++;
        }
        return ans;
    }
};
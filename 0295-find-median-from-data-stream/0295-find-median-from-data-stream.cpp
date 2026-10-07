class MedianFinder {
public:
    priority_queue<int>lmin;
    priority_queue<int,vector<int>,greater<int>>rmax;
    MedianFinder() {} 
    void addNum(int num) {
        lmin.push(num);
        rmax.push(lmin.top());lmin.pop();
        if(lmin.size()<rmax.size()){
            lmin.push(rmax.top());rmax.pop();
        }
    }
    
    double findMedian() {
        if(lmin.size()>rmax.size()) return lmin.top();
        return (lmin.top()+rmax.top())/2.0;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
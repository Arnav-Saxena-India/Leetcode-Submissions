class MinStack {
public:
    vector<pair<int,int>>arr;
    MinStack() {}
    void push(int value) {
        if(arr.empty()){
            arr.push_back({value,value});
        }
        else{
            arr.push_back({value,min(value,arr.back().second)});
        }
    }
    
    void pop() {
        arr.pop_back();
    }
    
    int top() {
        return arr.back().first;
    }
    
    int getMin() {
        return arr.back().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
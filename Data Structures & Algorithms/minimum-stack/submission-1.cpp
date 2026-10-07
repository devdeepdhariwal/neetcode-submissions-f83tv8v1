class MinStack {
public:
    MinStack() {
        
    }
    vector<pair<int,int>> st;
   
    
    void push(int val) {
        int minval;
        if(st.empty()){
           minval = val;
        }
         else {
           minval = min(st.back().second,val);
         }
        st.push_back({val,minval});
    }
    
    void pop() {
        st.pop_back();
    }
    
    int top() {
        return st.back().first;
    }
    
    int getMin() {
        return st.back().second;
    }
};

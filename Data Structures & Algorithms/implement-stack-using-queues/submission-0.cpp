class MyStack {
public:
    MyStack() {
    }

    queue<int> q;
    
    void push(int x) {
        q.push(x);
        int size = q.size();
        int i = 0;
        while(i<size-1){
            int el = q.front();
            q.pop();
            q.push(el);
            i++;
        }
    }
    
    int pop() {
        int x;
        if(q.size()>=1){
            x = q.front();
            q.pop();
        }
        return x;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
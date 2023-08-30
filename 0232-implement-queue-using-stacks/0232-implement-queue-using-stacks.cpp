class MyQueue {
public:
    MyQueue() {
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        while(!(s1.size() == 0)){
            int push = s1.top();
            s1.pop();
            s2.push(push);
        }
        int ret = s2.top();
        s2.pop();
        while(!(s2.size() == 0)){
            int push = s2.top();
            s2.pop();
            s1.push(push);
        }
        return ret;
    }
    
    int peek() {
        while(!(s1.size() == 0)){
            int push = s1.top();
            s1.pop();
            s2.push(push);
        }
        int ret = s2.top();
        while(!(s2.size() == 0)){
            int push = s2.top();
            s2.pop();
            s1.push(push);
        }
        return ret;
    }
    
    bool empty() {
        return s1.size() == 0;
    }
private:
    stack<int> s1;
    stack<int> s2;
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
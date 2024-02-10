class MyQueue {
    stack<int> meow, woof;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        meow.push(x);
    }
    
    int pop() {
        peek();
        int x=woof.top();
        woof.pop();
        return x;
    }
    
    int peek() {
        if(woof.empty()){
        while(!meow.empty()){
            woof.push(meow.top());
            meow.pop();
        }
        }
        return woof.top();
    }
    
    bool empty() {
        return meow.empty()&& woof.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
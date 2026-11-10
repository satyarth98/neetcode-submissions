class MinStack {
public:
    stack<int> st;
    stack<int> Minst;
    MinStack() { 
    }
    void push(int val) {
        st.push(val);
        if(Minst.empty()){
            Minst.push(val);
        }
        else{
            Minst.push(min(val, Minst.top()));
        }
    }
    
    void pop() {
        st.pop();
        Minst.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return Minst.top();
    }
};

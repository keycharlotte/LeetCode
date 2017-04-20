class Solution {
public:
   void push(int value) {
        datastack.push(value);
        if(minstack.size()== 0||minstack.top()>value)
        {
            minstack.push(value);
        } else
        {
            int temp = minstack.top();
            minstack.push(temp);
        }
    }
    void pop() {
        datastack.pop();
        minstack.pop();
    }
    int top() {
        return datastack.top();
    }
    int min() {
        return minstack.top();
    }

private:
    stack<int> datastack;
    stack<int> minstack;
};

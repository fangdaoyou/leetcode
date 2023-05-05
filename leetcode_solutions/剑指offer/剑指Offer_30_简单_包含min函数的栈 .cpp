//
// Created by fang on 2023/5/5.
//


#include <bits/stdc++.h>

using namespace std;
class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> stk1, stk2;
    MinStack() {

    }

    void push(int x) {
        stk1.push(x);
        if (stk2.empty()) stk2.push(x);
        else stk2.push(x < stk2.top() ? x : stk2.top());
    }

    void pop() {
        stk1.pop();
        stk2.pop();
    }

    int top() {
        return stk1.top();
    }

    int min() {
        return stk2.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->min();
 */
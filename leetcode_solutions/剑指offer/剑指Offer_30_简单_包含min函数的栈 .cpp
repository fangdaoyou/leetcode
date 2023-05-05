//
// Created by fang on 2023/5/5.
//


#include <bits/stdc++.h>

using namespace std;
class MinStack {
public:

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

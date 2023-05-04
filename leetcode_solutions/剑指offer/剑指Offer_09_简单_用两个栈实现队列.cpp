//
// Created by fang on 2023/5/3.
//


#include <bits/stdc++.h>

using namespace std;

class CQueue {
public:
    stack<int> stk1, stk2;

    CQueue() {

    }

    void appendTail(int value) {
        stk1.push(value);
    }

    int deleteHead() {
        if (stk1.empty()) return -1;
        while (!stk1.empty()) {
            stk2.push(stk1.top());
            stk1.pop();
        }
        int value = stk2.top();
        stk2.pop();
        while (!stk2.empty()) {
            stk1.push(stk2.top());
            stk2.pop();
        }
        return value;
    }
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */
//
// Created by fang on 2023/5/3.
//


#include <bits/stdc++.h>

using namespace std;

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    vector<int> ans;

    void dfs(ListNode *head) {
        if (head == nullptr) return;
        dfs(head->next);
        ans.push_back(head->val);
    }

    vector<int> reversePrint(ListNode *head) {
        dfs(head);
        return ans;
    }
};
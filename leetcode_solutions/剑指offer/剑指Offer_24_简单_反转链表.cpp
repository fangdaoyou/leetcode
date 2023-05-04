//
// Created by fang on 2023/5/4.
//


#include <bits/stdc++.h>

using namespace std;

//  Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* reverseList1(ListNode* head) {
        ListNode *pre = nullptr;
        while (head) {
            ListNode* temp = head->next;
            head->next = pre;
            pre = head;
            head = temp;
        }
        return pre;
    }
    ListNode* reverseList2(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;
        ListNode* node = reverseList2(head->next);
        head->next->next = head;
        head->next = nullptr;
        return node;
    }
};
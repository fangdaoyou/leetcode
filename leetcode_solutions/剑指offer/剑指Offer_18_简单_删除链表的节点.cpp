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
    ListNode *deleteNode(ListNode *head, int val) {
        ListNode *dummy = new ListNode(INT_MAX), *pre = dummy;
        dummy->next = head;
        while (head) {
            if (head->val == val) {
                pre->next = head->next;
                break;
            }
            pre = head;
            head = head->next;
        }
        ListNode *temp = dummy->next;
        delete dummy;
        return temp;
    }
};
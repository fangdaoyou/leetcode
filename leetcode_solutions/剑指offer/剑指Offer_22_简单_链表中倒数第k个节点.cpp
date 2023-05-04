//
// Created by fang on 2023/5/4.
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
    ListNode *getKthFromEnd(ListNode *head, int k) {
        ListNode *dummy = new ListNode(0), *f = dummy, *s = dummy;
        dummy->next = head;
        while (k--) {
            f = f->next;
            if (f == nullptr) return f;
        }
        while (f) {
            f = f->next;
            s = s->next;
        }
        delete dummy;
        return s;
    }
};
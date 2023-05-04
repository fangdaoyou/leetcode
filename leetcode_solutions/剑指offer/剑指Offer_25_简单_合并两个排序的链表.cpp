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
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        ListNode *head = new ListNode(0);
        ListNode *pl = head;
        while (l1 && l2) {
            if (l1->val < l2->val) {
                pl->next = l1;
                l1 = l1->next;
            } else {
                pl->next = l2;
                l2 = l2->next;
            }
            pl = pl->next;
        }
        pl->next = l1 ? l1 : l2;
        return head->next;
    }
};
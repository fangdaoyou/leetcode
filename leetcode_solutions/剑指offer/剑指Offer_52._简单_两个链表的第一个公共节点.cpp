//
// Created by fang on 2023/5/6.
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *node1 = headA, *node2 = headB;
        while (node1 != node2){
            node1 = node1 ? node1->next : headB;
            node2 = node2 ? node2->next : headA;
        }
        return node1;
    }
};
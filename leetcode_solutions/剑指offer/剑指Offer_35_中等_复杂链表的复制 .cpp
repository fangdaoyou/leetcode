//
// Created by fang on 2023/5/5.
//


#include <bits/stdc++.h>

using namespace std;


// Definition for a Node.
class Node {
public:
    int val;
    Node *next;
    Node *random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {
public:
    Node *copyRandomList(Node *head) {
        if (head == nullptr) return head;
        Node *newHead = new Node(head->val), *cur = newHead, *oriHead = head;
        unordered_map < Node * , Node * > map;
        map[head] = newHead;
        while (head->next != nullptr) {
            cur->next = new Node(head->next->val);
            cur = cur->next;
            head = head->next;

            map[head] = cur;
        }
        cur = newHead;
        while (cur != nullptr) {
            cur->random = map[oriHead->random];
            cur = cur->next;
            oriHead = oriHead->next;
        }
        return newHead;
    }
};
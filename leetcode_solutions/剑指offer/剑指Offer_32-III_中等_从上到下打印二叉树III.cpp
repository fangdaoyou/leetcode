//
// Created by fang on 2023/5/5.
//


#include <bits/stdc++.h>

using namespace std;


//  Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(!root)return ans;
        deque<TreeNode*> deq;
        deq.emplace_front(root);
        bool dir=1;//l to r
        while(!deq.empty()){
            int len=deq.size();
            vector<int> vec;
            for(int i=0;i!=len;++i){
                if(dir){
                    root=deq.front();
                    deq.pop_front();
                    vec.emplace_back(root->val);
                    if(root->left)deq.emplace_back(root->left);
                    if(root->right)deq.emplace_back(root->right);
                }
                else{
                    root=deq.back();
                    deq.pop_back();
                    vec.emplace_back(root->val);
                    if(root->right)deq.emplace_front(root->right);
                    if(root->left)deq.emplace_front(root->left);
                }
            }
            dir=!dir;
            ans.emplace_back(vec);
        }
        return ans;
    }
};
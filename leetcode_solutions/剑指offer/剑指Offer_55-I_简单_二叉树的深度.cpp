#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    return 0;
}

//  Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int maxDepth(TreeNode *root) {
        if (root == nullptr) return 0;
        return maxDepth(root->left, root->right) + 1;
    }
};
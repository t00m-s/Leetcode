#include <bits/stdc++.h>
using namespace std;
/**
 * Definition for a binary tree node.
 */
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int childDepth(TreeNode* root)
    {
        if(root)
        {
            int l = 1 + childDepth(root->left);
            int r = 1 + childDepth(root->right);
            return max(l, r);
        }
        return 0;
    }
    int maxDepth(TreeNode* root)
    {
        if(root)
            return 1 + max(childDepth(root->left), childDepth(root->right));
        return 0;
    }
};

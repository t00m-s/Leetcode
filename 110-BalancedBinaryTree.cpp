#include <bits/stdc++.h>
using namespace std;
/**
 * Definition for a binary tree node.
 */

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    int maxHeight(TreeNode* start, bool &balanced)
    {
        if(start)
        {
            int left =  1 + maxHeight(start->left, balanced);
            int right = 1 + maxHeight(start->right, balanced);
            if(abs(left-right) > 1)
                balanced = false;
            return max(left, right);
        }
        return 0;
    }

    bool isBalanced(TreeNode* root)
    {
        if(root)
        {
            bool balanced = true;
            int left = maxHeight(root->left, balanced);
            int right = maxHeight(root->right, balanced);
            return abs(left-right) <= 1 && balanced;
        }
        return true;
    }
};

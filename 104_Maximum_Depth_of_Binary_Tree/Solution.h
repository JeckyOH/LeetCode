/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
private:
    int max_depth = 0;

public:
    void recursive(TreeNode* cur_node, int cur_depth)
    {
        if (cur_node == NULL)
            this->max_depth = this->max_depth < cur_depth ? cur_depth : this->max_depth;
        else
        {
            recursive(cur_node->left, cur_depth + 1);
            recursive(cur_node->right, cur_depth + 1);
        }
    }

    int maxDepth(TreeNode* root) {
        recursive(root, 0);

        return this->max_depth;
    }
};

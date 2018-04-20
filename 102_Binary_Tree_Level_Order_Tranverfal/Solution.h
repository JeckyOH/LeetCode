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
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        vector<int> cur_level_values;
        queue<TreeNode*> node_queue({root, NULL});

        if (root == NULL)
            return result;

        while (!node_queue.empty())
        {
            TreeNode* cur_node = node_queue.front();
            node_queue.pop();

            if (cur_node == NULL)
            {
                result.push_back(cur_level_values);
                cur_level_values.clear();
                if (!node_queue.empty())
                    node_queue.push(NULL);
            }
            else
            {
                cur_level_values.push_back(cur_node->val);
                if (cur_node->left != NULL)
                    node_queue.push(cur_node->left);
                if (cur_node->right != NULL)
                    node_queue.push(cur_node->right);
            }
        }

        return result;
    }
};

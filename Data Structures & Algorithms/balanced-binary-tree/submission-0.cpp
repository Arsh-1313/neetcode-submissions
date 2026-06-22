/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    pair<int,bool> height(TreeNode* root){
        if(root==NULL) return {0,true};
        pair<int,bool> left=height(root->left);
        pair<int,bool> right=height(root->right);

        int height=abs(left.first-right.first);
        int h=1+max(left.first,right.first);

        bool balanced=
            left.second &&
            right.second && height<=1;
        
        return {h,balanced};
    }
    bool isBalanced(TreeNode* root) {
        return height(root).second;
    }
};

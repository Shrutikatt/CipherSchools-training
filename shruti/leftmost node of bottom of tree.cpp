class Solution
{
public:
    void find(TreeNode* root, int l, int &ml, int &ans)
    {
        if(root == NULL)
            return;

        if(l > ml)
        {
            ans = root->val;
            ml = l;
        }

        find(root->left, l + 1, ml, ans);
        find(root->right, l + 1, ml, ans);

    }
    int findBottomLeftValue(TreeNode* root)
    {
        int ans = root->val;
        int maxLevel = 1;
        int Level = 1;
        find(root,Level, maxLevel, ans);

        return ans;
    }
};

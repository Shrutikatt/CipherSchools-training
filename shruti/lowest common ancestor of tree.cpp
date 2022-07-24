if(root == NULL)
    return NULL;

if(root == p || root == q)
{
    return root;
}


auto l_find = lowestCommonAncestor(root->left, p, q);
auto r_find = lowestCommonAncestor(root->right, p,q);

if(l_find != NULL && r_find != NULL)
{
    return root;
}

if(l_find == NULL && r_find == NULL)
{
    return NULL;
}

return (l_find == NULL) ? r_find : l_find;

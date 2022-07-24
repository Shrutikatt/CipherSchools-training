void levelOrder(node* root)
{

    if(root == NULL)
    {
        return;
    }

    queue<node*> Q;

    Q.push(root);
    int count = 1;
    int mxSize = 1;
    int Level = 1;
    while(!Q.empty())
    {

        int size = Q.size();

        if(size >= mxSize)
        {
            mxSize = size;
            Level = count;
        }

        for(int i = 0; i < size; i++)
        {

            node* n = Q.front();
            Q.pop();



            if(n->left)
            {
                Q.push(n->left);
            }

            if(n->right)
            {
                Q.push(n->right);
            }
        }
        count++;


    }

    cout << Level;

}

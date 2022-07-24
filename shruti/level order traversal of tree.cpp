#include <iostream>
#include<queue>
using namespace std;


class node
{
public :
    int data;
    node* left;
    node* right;

    node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};


void levelOrder(node* root)
{

    if(root == NULL)
    {
        return;
    }

    queue<node*> Q;

    Q.push(root);

    while(!Q.empty())
    {

        node* n = Q.front();
        Q.pop();

        cout << n->data << " ";

        if(n->left)
        {
            Q.push(n->left);
        }

        if(n->right)
        {
            Q.push(n->right);
        }

    }

}

/*
1
/ \
2 3
/ \ / \
4 5 6 7

1 -> 1
2 -> 2, 3
3 -> 4, 5, 6, 7
*/

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    levelOrder(root);
    return 0;
}

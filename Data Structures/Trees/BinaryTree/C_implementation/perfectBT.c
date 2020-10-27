#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int val)
{
    struct node* newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->left = NULL;
    newnode->right = NULL;

    return newnode;
}

int depth(struct node* root)
{
    int d=0;
    while (root!=NULL)
    {
        d++;
        root = root->left;
    }
    return d;
}

int is_Perfect(struct node * root, int depth, int level)
{
    if (root == NULL)
        return 1;

    if (root->left == NULL && root->right == NULL)
        if(depth == level+1)    
            return 1;
        else
            return 0;
        
    
    if (root->left == NULL || root->right == NULL)
        return 0;

    return is_Perfect(root->left,depth,level+1) && is_Perfect(root->right, depth, level+1);
}

int isPerfect(struct node * root)
{
    int d = depth(root);
    return is_Perfect(root,d,0);
}


int main()
{
    struct node * root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    //to toggle between a perfect bt to not a perfect tree comment the following
    root->right->left = createNode(6);
    root->right->right = createNode(7);
    //----------------------------------------------------------------------------

    int x = isPerfect(root);

    if (x==1)
        printf("It is a PERFECT tree\n");
    else
        printf("It is not a PERFECT tree\n");
    
    return 0;
}

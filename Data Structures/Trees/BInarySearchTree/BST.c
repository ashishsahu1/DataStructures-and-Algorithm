#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* left;
    struct node *right;
};

struct node* createNode(int value)
{
    struct node* newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

struct node* insert(struct node *root ,int value)
{
    if (root == NULL)
        return createNode(value);
    
    if (root->data >value)
        root->left = insert(root->left,value);
    else
        root->right = insert(root->right,value);

    return root;
}

void inOrder(struct node* root)
{
    if (root!= NULL)
    {
        inOrder(root -> left);
        printf("%d   ",root->data);
        inOrder(root -> right);
    }
    
}

int main()
{
    struct node *root = NULL;
    root = insert(root,3);
    root = insert(root,10);
    root = insert(root,14);
    root = insert(root,7);
    root = insert(root,6);
    root = insert(root,3);
    root = insert(root,2);
    root = insert(root,46);
    root = insert(root,24);

    inOrder(root);
    return 0;
}

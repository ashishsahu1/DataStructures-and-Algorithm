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

//******************************************************************************************

void inOrder(struct node* root)
{
    if (root == NULL)
        return;

    inOrder(root->left);
    printf("%d   ",root->data);
    inOrder(root->right);
}

// Pre-Order traversal
void PreOrder(struct node* root)
{
    if (root == NULL)
        return;

    printf("%d   ",root->data);
    PreOrder(root->left);
    PreOrder(root->right);
}

// Post-Order traversal
void postOrder(struct node* root)
{
    if (root == NULL)
        return;

    postOrder(root->left);
    postOrder(root->right);
    printf("%d   ",root->data);
}

//******************************************************************************************

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

    printf("INORDER : ");
    inOrder(root);

    printf("\nPREORDER : ");
    PreOrder(root);

    printf("\nPOSTORDER : ");
    postOrder(root);

    return 0;
}

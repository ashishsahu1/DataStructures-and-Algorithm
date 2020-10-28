#include<stdio.h>
#include<stdlib.h>

int key;

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
void PreOrder(struct node* root)
{
    if (root == NULL)
        return;

    if (root-> data == key)
    {
        printf("Yes the given key is present in the tree\n");
    }
    
    PreOrder(root->left);
    PreOrder(root->right);
}
//******************************************************************************************

int main()
{
    int val;
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

    while (1)
    {
        printf("Enter the value in tree : ");
        scanf("%d",&val);

        root = insert(root,val);
    }
    

    printf("Enter the key to search : ");
    scanf("%d",&key);
    PreOrder(root);

    return 0;
}

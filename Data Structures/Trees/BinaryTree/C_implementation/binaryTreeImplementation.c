#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

// creating Tree node, it can be anything root and also the other nodes. 
struct node* createTreeNode(int value)
{
    struct node * newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->left = newnode->right = NULL;

    return newnode;
}

// inserting left node to a provided node
struct node* createLeftNode(struct node* currentNode,int value)
{
    currentNode->left = createTreeNode(value);
    return currentNode->left; 
} 

// inserting right node to a provided node
struct node* createRightNode(struct node* currentNode,int value)
{
    currentNode->right = createTreeNode(value);
    return currentNode->right; 
}

//                                  ************** TRAVERSALS *************** 

// In-Order traversal 
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
//                      *************************************************************

//main 
int main()
{
    struct node *root = createTreeNode(1);

    createLeftNode(root,2);
    createRightNode(root,3);

    printf("INORDER traversal : ");
    inOrder(root);
    printf("\n");

    printf("PREORDER traversal : ");
    PreOrder(root);
    printf("\n");

    printf("POSTORDER traversal : ");
    postOrder(root);
    printf("\n");

    return 0;
}

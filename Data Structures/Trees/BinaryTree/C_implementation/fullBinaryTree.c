#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};
//-------------------------------- Tree Creation ------------------------------------
struct node* createNode(int value)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->left = NULL;
    newnode->right = NULL;

    return newnode;
}

struct node* insertLeft(struct node* currentNode,int value)
{
    currentNode->left = createNode(value);
    return currentNode->left;
}

struct node* insertRight(struct node* currentNode,int value)
{
    currentNode->right = createNode(value);
    return currentNode->right;
}

//-----------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------

//                        Checking if the tree is full binary tree or not

int isFullTree(struct node* root)
{
    if (root == NULL)
        return 1;

    if (root->left== NULL && root->right==NULL)
        return 1;

    if ((root->left) && (root->right))
        return (isFullTree(root->left)) && (isFullTree(root->right));
    
    return 0;   
}

//---------------------------------------------------------------------------------------------
int main()
{
    struct node* root = createNode(1);
    insertLeft(root,2);
    insertRight(root,3);   
    insertLeft(root->left,4); 

    printf("INORDER traversal : ");
    inOrder(root);
    printf("\n");

    printf("PREORDER traversal : ");
    PreOrder(root);
    printf("\n");

    printf("POSTORDER traversal : ");
    postOrder(root);
    printf("\n");

    int x = isFullTree(root);
    if(x == 1)
        printf("Full Tree\n");
    else if(x == 0)
        printf("Not a Full Tree\n");
    else
        printf("unable to check\n");

}

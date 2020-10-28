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
    int val,ch;
    struct node *root = NULL;

    while (1)
    {
        printf("******MENU******\n");
        printf("1.Enter value.\n");
        printf("2.Search\n");
        printf("3.Delete\n");
        printf("4.print\n");
        printf("5.Exit.\n");
        printf("Enter the choice: ");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:
            printf("Enter the value in tree : ");
            scanf("%d",&val);
            root = insert(root,val);
            break;
        
        default:
            break;
        }

        
    }
    

    printf("Enter the key to search : ");
    scanf("%d",&key);
    PreOrder(root);

    return 0;
}

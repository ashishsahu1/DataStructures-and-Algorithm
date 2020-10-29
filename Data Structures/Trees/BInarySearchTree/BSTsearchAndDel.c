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
void search(struct node* root)
{
    if (root == NULL)
        return;

    if (root-> data == key)
    {
        printf("Yes the given key is present in the tree\n");
    }
    else
    {
        printf("Value not present\n");
    }
    
    
    PreOrder(root->left);
    PreOrder(root->right);
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
        
        case 2:
            printf("Enter the to be searched : ");
            scanf("%d",&key);
            search(root);
            break;

        case 3:
        break;

        case 4:
                printf("INORDER : ");
                inOrder(root);

                printf("\nPREORDER : ");
                PreOrder(root);

                printf("\nPOSTORDER : ");
                postOrder(root);
            break;

        case 5:
        exit(0);
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

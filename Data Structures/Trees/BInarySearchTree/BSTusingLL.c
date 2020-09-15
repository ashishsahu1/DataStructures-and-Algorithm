#include<stdio.h>
#include<stdlib.h>

struct BSTnode
{
    int data;
    struct BSTnode *left;
    struct BSTnode *right;
};

struct BSTnode *createNode(int data)
{
    struct BSTnode *newnode = (struct BSTnode*)malloc(sizeof(struct BSTnode));
    newnode->data = data;
    newnode->left=NULL;
    newnode->right=NULL;

    return newnode;
}

struct BSTnode* insert(struct BSTnode *root,int data)
{
    if (root==NULL)
        root=createNode(data);
    
    if(data <= root->data)
        root->left = insert(root->left,data);
    
    else
        root->right = insert(root->right,data);

    return root;  
}

int search(struct BSTnode *root,int data)
{
    if(root==NULL)
        return 0;
    else if(root->data==data)
        return 1;
    else if(data<root->data)
        return search(root->left,data);
    else
        return search(root->right,data);
}

void inorder(struct BSTnode *root)
{
    if (root==NULL)
    {
        printf("Tree Not formed\n");
    }
    inorder(root->left);
    printf("%d\t",root->data);
    inorder(root->right);   
    
}

void menu()
{
    printf("1. Insert\n");
    printf("2. Search\n");
    printf("3. Print\n");
    printf("4. exit\n");

}

int main()
{
    struct BSTnode *root=NULL;
    int data,ch,flag;

    root = insert(root,50);
    while (1)
    {
        menu();
        printf("Enter your choice :");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:
            printf("Enter the value :");
            scanf("%d",&data);
            insert(root,data);
            break;
        
        case 2:
            printf("Enter the value to be searched :");
            scanf("%d",&data);
            flag = search(root,data);

            if(flag == 1)
                printf("Found\n");
            else
                printf("Not Found\n");
            break;

        case 3:
            printf("Inorder : ");
            inorder(root);
            break;

        case 4:
            exit(0);
            break;

        default:
            
            break;
        }

    }
    
    

}
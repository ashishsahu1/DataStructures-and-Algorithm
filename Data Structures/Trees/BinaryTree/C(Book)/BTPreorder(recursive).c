#include<stdio.h>
#include<stdlib.h>
//we are using queue for insertion 
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct que
{
    struct Node *data;
    struct que *next;
};

struct Node *createNode(int data)
{
    struct Node *newnode = malloc(sizeof(struct Node));
    newnode->data=data;
    newnode->left = NULL;
    newnode->right = NULL;

    return newnode;
}

struct que *createQueue(struct Node *data)
{
    struct que *newque = malloc(sizeof(struct que));
    newque->data=data;
    newque->next=NULL;

    return newque;
}

void insert(struct Node *root,int data)
{
    struct Node *newnode = createNode(data);
    if (!newnode)
        printf("Memory error\n");
    
    if (!root)
        root = newnode;
        return;

    

    



    
}

int main()
{
    struct Node *root=NULL;

}
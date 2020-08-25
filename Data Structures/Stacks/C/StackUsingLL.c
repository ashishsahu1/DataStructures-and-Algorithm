#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *top=NULL;

struct node *createNode(int value)
{
    struct node *newnode= (struct node*)malloc(sizeof(struct node));
    newnode->next=NULL;
    newnode->data =value;

    return newnode;
}

void push(value)
{
    struct node *newnode = createNode(value);
    if (top==NULL)
    {
        top=newnode;
    }
    else
    {
        newnode->next=top;
        top=newnode;
    }
}

void pop()
{
    if (top==NULL)
    {
        printf("Stack Underflow\n");
    }
    else{
        struct node *temp=top;
        top=top->next;
        free(temp);
    }
}
    

void menu(){
    printf("1. Push Element in stack \n");
    printf("2. Pop the element \n");
    printf("3. Print stack\n");
    printf("4. Exit()\n");
}

void show()
{
    struct node *temp=top;
    while (temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
    
}

int main()
{
    int ch,value;
    while (1)
    {
        menu();
        printf("Enter your choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            /* Push */
            printf("Enter the value to push : ");
            scanf("%d",&value);
            push(value);
            break;
        case 2:
            /* Pop */
            pop();
            break;
        case 3:
            /* print */
            show();
            break;
        case 4:
            /* exit */
            exit(0);
            break;
        
        default:
            break;
        }

    }
    
}
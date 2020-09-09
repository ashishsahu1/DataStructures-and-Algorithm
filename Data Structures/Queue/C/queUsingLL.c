#include<stdio.h>
#include<stdlib.h>      /* for exit() */
#include<string.h>

struct node
{
    struct node * next;
    int data;
};

struct node *front=NULL;
struct node *end=NULL;

//node creating function
struct node* createNode(int data)
{
    struct node* newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;

    return newnode;
}

void menu()
{
    printf("\n**************************************************************************** \n");
    printf("1. Enqueue \n");
    printf("2. Dequeue \n");
    printf("3. print \n");
    printf("4. Exit \n"); 
    printf("\n**************************************************************************** \n");
}

void enqueue(int data)
{
    struct node *newnode=createNode(data);
    if(front==NULL)
    {
        front=newnode;
        end=newnode;
    }
    else
    {
        end->next = newnode;
        end=newnode; 
    }  
}

void out()
{
    struct node *temp;
    temp=front;
    if (front==NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {  
        while (temp->next!=NULL)
        {
            printf("%d\t",temp->data);
            temp=temp->next;
        }
    }
}

void dequeue()
{
    if (front==NULL)
    {
        printf("Nothing to delete\n");
    }
    else{
        struct node *temp=front;
        front=front->next;
        free(temp);
    }
       
}

int main()
{
    int ch,data;
    while (1)
    {
        menu();
        printf("Enter your choice : ");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:
            printf("Enter your Value : ");
            scanf("%d",&data);

            enqueue(data);
            break;

        case 2:
            dequeue();
            break;

        case 3:
            printf("printing queue...\n");
            out();
            break;

        case 4:
            printf("Exiting...\n");
            exit(1);
            break;
        
        default:
            printf("Something went wrong\n");
            break;
        }

    }
    
    menu();
}
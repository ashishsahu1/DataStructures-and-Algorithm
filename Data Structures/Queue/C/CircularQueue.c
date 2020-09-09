#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node* next;
};

struct node *front = NULL;
struct node *rear = NULL;

struct node *createNode(int data)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
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
    struct node *newnode = createNode(data);
    if (front == NULL && rear==NULL)
    {
        front = rear = newnode;
        newnode->next = front;               
    }
    else
    {
        newnode->next = front;
        rear->next = newnode;
        rear=rear->next;
    }  
}

void dequeue()
{
    if (front == NULL)
    {
        printf("Queue Empty\n");
    }

    if (front == rear)
    {
        free(front);
        printf("Deleted\n");
        front==NULL;
        rear==NULL;
    }
    else
    {
        struct node *temp=front;
        front=front->next;

        free(temp);
        rear->next = front;
    }    
}

void out()
{
    struct node *temp = front;
    while (temp->next!=front)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}

int main()
{
    int ch,value;
    while (1)
    {
        menu();
        printf("ENter your choice : ");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:
            printf("Enter the value : ");
            scanf("%d",&value);
            enqueue(value);
            break;
        
        case 2:
            dequeue();
            break;

        case 3:
            out();
            break;

        case 4:
            exit(1);
            break;
        
        default:
        printf("SOmething went wrong\n");
            break;
        }
    }
    
}
#include<stdio.h>
#include<stdlib.h>      /* for exit() */
#include<string.h>

#define SIZE 100
int queue[SIZE];
int front = -1;
int end = -1;

void menu()
{
    printf("\n**************************************************************************** \n");
    printf("1. Enqueue \n");
    printf("2. Dequeue \n");
    printf("3. check \n");
    printf("4. print \n");
    printf("5. Exit \n"); 
    printf("\n**************************************************************************** \n");
}

void enqueue(int data)
{
    if (front ==-1 && end == -1)
    {
        front=front+1;
        end=end+1;
        queue[end]=data;
    }
    else
    {
        end=end+1;
        queue[end]=data;
    }
}

void out()
{
    int i;
    for ( i = front; i <= end; i++)
    {
        printf("%d\t",queue[i]);
    }   
}

void dequeue()
{
    if (front==-1)
    {
        printf("Queue already empty\n");
    }
    else{
        front=front+1;
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
            printf("front : %d\t end : %d",front,end);
            break;

        case 4:
            printf("printing queue...\n");
            out();
            break;

        case 5:
            printf("Exiting...\n");
            exit(1);
            break;
        
        default:
            printf("Something went wrong\n");
            break;
        }

    }
    
}
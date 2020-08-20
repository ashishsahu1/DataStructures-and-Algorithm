#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head;

struct node *createNode(int value)
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode -> data = value;
    newnode -> next = NULL;
    newnode -> prev = NULL;
    return newnode;
}

void insertATBeg(int value)
{
    struct node *newnode = createNode(value);
    if(head==NULL)
    {
        newnode -> next = head;
        head = newnode;
    }
    else
    {
        newnode -> next = head;
        head -> prev = newnode;
        head = newnode;
    }
}

void insertAtEnd(int value)
{
    struct node *newnode=createNode(value);
    struct node *temp;
    temp=head;
    while (temp->next!=NULL)
    {
        //traversing till last element
        temp=temp->next;
    }
    if (temp->next==NULL)
    {
        temp->next=newnode;
        newnode->prev=temp;
    }
    else
    printf("Something went wrong\n");   
}

void deletionAtBeg(){
    if (head!=NULL)
    {
        struct node *temp;
        temp=head;
        head=head->next;
        head->prev = NULL;
        free(temp);
        printf("Deletion at begining successfull \n");
    }
    else
    {
        printf("Nothing to delete \n");
    }   
}

void deletionAtEnd(){
    struct node* temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    free(temp->next->next);
    temp->next=NULL;
    printf("Deletion at the end is successfull");    
}

void show()
{
    struct node * temp;
    temp=head;
    while (temp!=NULL)
    {
        //traversing till last element's next part
        printf("%d   ",temp->data);
        temp=temp->next;
    }
    printf("");
    
}

int count()
{
    struct node *temp;
    temp=head;
    int c=0;
    while(temp!=NULL){
        c++;
        temp=temp->next;
    }
    return c;
}

void insertAtBet(int value,int pos)
{
    struct node *newnode=createNode(value);
    struct node *temp = head;
    int c=2;
    while(temp!=NULL){
        c++;
        temp=temp->next;

        if (c==pos)
        {
            newnode->next = temp->next;
            temp->next = newnode;
            break;
        }   
    }
}

void deleteAtBet(int pos){
    struct node *temp = head;
    struct node *temp2 = head->next;
    int c=2;
    while(temp!=NULL){
        c++;
        temp=temp->next;
        temp2=temp2->next;

        if (c==pos)
        {
            temp->next=temp2->next;
            free(temp2);
            break;
        }   
    }

}

void menu()
{
    printf("1. Insertion from beginning \n");
    printf("2. Insertion for end \n");
    printf("3. Deletion from beginning \n");
    printf("4. Deletion from end \n");
    printf("5. Size of List \n");
    printf("6. Insertion in between \n");
    printf("7. Deletion in between \n"); 
    printf("8. Show my list \n");
    printf("9. Exit() \n");
    
}

int main()
{
    int c,x,pos;
    while (1)
    {

        menu();
        printf("Enter your choice : ");
        scanf("%d",&c);

        switch (c)
        {

        case 1:
            /* inserting at begining in the list */
            printf("Enter the value : ");
            scanf("%d",&x);
            /* Creating a list */
            insertATBeg(x);
            
            break;
        
        case 2:
            /* inserting at end */
            printf("Enter the value : ");
            scanf("%d",&x);
            /* Creating a list */
            insertAtEnd(x);
            break;
        
        case 3:
            /* deletion from beg */
            deletionAtBeg();
            break;
        
        case 4:
            /* Deletion at end */
            deletionAtEnd();
            break;
        
        case 5:
            /* size of list */
            printf("Number of Element : %d\n",count());
            break;
        
        case 6:
            /* insertion at a position */
            printf("Enter the postion : ");
            scanf("%d",&pos);
            printf("Enter the value : ");
            scanf("%d",&x);
            /* Creating a list */
            insertAtBet(x,pos);

            break;
        
        case 7:
            /* deletion ata position */
            printf("Enter the pos : ");
            scanf("%d",&pos);
            /* Creating a list */
            deleteAtBet(pos);
            break;
        
        case 8:
            /* Showing the list */
            show();
            break;
        
        case 9:
            /* exit */
            exit(0);
            break;
        
        default:
            break;
        }
    }
}
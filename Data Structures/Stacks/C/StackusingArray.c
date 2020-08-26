#include<stdio.h>

int a[1000];
int top = -1;

void push(int value)
{
    if (top == 1000-1)
    {
        /* code */
        printf("Stack Overflow \n");
    }
    else{
        top++;
        a[top]=value;
    }
    
}

void pop(){
    if (top<0)
    {
        /* code */
        printf("Stack Underflow\n");
    }
    else{
        top--;
        printf("Deleted\n");
    } 
}

void show(){
    int i;
    for ( i = top; i > -1; i--)
    {
        /* code */
        printf("%d\t",a[i]);
    }
    printf("\n");
    
}
void menu(){
    printf("1. Push Element in stack \n");
    printf("2. Pop the element \n");
    printf("3. Print stack\n");
    printf("4. Exit()\n");
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
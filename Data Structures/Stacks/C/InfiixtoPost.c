#include<stdio.h>
#include<stdlib.h>
#define SIZE 100

char stack[SIZE];
int top = -1;

void push(int value)
{
    if (top == SIZE-1)
    {
        /* code */
        printf("Stack Overflow \n");
    }
    else{
        top++;
        stack[top]=value;
    }
    
}

void pop(){
    char item;
    if (top<0)
    {
        /* code */
        printf("Stack Underflow\n");
    }
    else
    {
        item = stack[top];
        top--;
        return(item);
    } 
}

int isOperator(char symbol)
{
    if (symbol )
    {
        /* code */
    }
    
}


int main()
{

}
#include<stdio.h>

void display(int arr[], int n)
{
    //Traversal
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}

int indInsertion(int arr[], int size, int element, int capacity, int index)
{
    //code for insertion
    if(size>=capacity)
    {
        return -1;
    }
    for(int i = size-1; i>=index;i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1;
}
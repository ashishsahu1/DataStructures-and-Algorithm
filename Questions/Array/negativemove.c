#include<stdio.h>

int main()
{
    int a[100],n;

    printf("Enter the length of the array : ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("Number : ");
        scanf("%d",&a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i]<0)
        {
            printf("%d ",a[i]);
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i]>=0)
        {
            printf("%d ",a[i]);
        }
        
    }
    
    
   
}
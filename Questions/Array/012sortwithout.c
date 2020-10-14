#include<stdio.h>

int main()
{
    int a[100],n;
    int c0=0,c1=0,c2=0;

    printf("Enter the length of the array : ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("Number : ");
        scanf("%d",&a[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        if (a[i]==0)
        {
            c0++;
        }
        else if (a[i]==1)
        {
            c1++;
        }
        else if (a[i]==2)
        {
            c2++;
        }
        else
        {
            continue;
        }
    }

    for (int i = 0; i < c0; i++)
    {
        printf("0 ");
    }

    for (int i = 0; i < c1; i++)
    {
        printf("1 ");
    }

    for (int i = 0; i < c2; i++)
    {
        printf("2 ");
    }
     

}
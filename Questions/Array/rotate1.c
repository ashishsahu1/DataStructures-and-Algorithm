#include<stdio.h>

int main()
{
    int a[100];
    int i,n;

    printf("Enter the size of the array : ");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
        printf("ENter element : ");
        scanf("%d",&a[i]);
    }
    int t;
    int temp = a[n-1];
    for ( i = n-1; i > 1; i--)
    {
        a[i] = a[n-]

    }

    printf("Array : ");
    for ( i = 0; i < n; i++)
    {
        printf("%d   ",a[i]);
    }

    return 0;
}

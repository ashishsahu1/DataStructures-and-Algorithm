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
    
    for (int i = n-1; i >= 0; i--)
    {
        printf("%d \n",a[i]);
    }
    return 0;
}

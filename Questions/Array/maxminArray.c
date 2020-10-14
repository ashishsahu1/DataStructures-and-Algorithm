#include<stdio.h>

int main()
{
    int a[100],n;
    int max,min;
    printf("Enter the length of the array : ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Number : ");
        scanf("%d",&a[i]);
    }
    max = min = a[1];
    for (int i = 0; i < n; i++)
    {
        if (a[i]>max)
        {
            max= a[i];
        }

        if (a[i]<=min)
        {
            min = a[i];
        }        
    }
    printf("Max : %d\n",max);
    printf("Min : %d\n",min);
    return 0;
}

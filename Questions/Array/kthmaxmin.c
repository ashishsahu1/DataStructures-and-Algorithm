#include<stdio.h>

int main()
{
    int a[100],n;
    int max,min,key;
    int kmax,kmin;
    printf("Enter the length of the array : ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("Number : ");
        scanf("%d",&a[i]);
    }
    printf("Enter key : ");
    scanf("%d",&key);
    int temp = 0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                temp = a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
            
        }
    }

    printf("kth Max : %d\n",a[key-1]);
    printf("kth Min : %d\n",a[n-key]);
}
#include<stdio.h>

int main()
{
    //Array declaration
    int arr[5][3];

    //2D Array input
    printf("Matrix Input\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the element : ");
            scanf("%d",&arr[i][j]);
        }
        
    }

    //2D Array printing/Matrix printing
    printf("Matrix printing\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Element at [%d][%d] is %d\n",i,j,arr[i][j]);
        }
        
    }
    
}

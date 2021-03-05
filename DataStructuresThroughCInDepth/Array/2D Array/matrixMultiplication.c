#include<stdio.h>

int main()
{
    //Array declaration
    int arr1[10][10], arr2[10][10];
    int arrAns[10][10];
    int n= 2,m=3;

    //Matrix 1 input
    printf("\nMatrix One Input\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Enter the element : ");
            scanf("%d",&arr1[i][j]);
        }
        
    }

    //Matrix 2 input
    printf("\nMatrix Two Input\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Enter the element : ");
            scanf("%d",&arr2[i][j]);
        }
        
    }

    //multiplication of 2 matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arrAns[i][j] = arr1[i][j]+arr2[i][j];
        }
        
    }

    //answer matrix printing
    printf("Matrix printing\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Element at [%d][%d] is %d\n",i,j,arrAns[i][j]);
        }
        
    }
    
}

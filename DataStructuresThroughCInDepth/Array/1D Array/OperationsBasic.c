#include <stdio.h>

//declaration of array
int arr[10];

int main()
{
    //Program starts here

    //Taking input of an array using a for loop
    for (int i = 0; i < 10; i++)
    {
        printf("Enter your element: ");
        scanf("%d",&arr[i]);
    }
    printf("\n");   

    //printing the array one by one using a for loop
    printf("Your Array is : ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");   
       
}

#include <stdio.h>

//declaration of global array(initialised by 1)
int arr[10];

int main()
{
    //Program starts here

    int sum=0;

    //Taking input of an array using a for loop
    for (int i = 0; i < 10; i++)
    {
        printf("Enter your element: ");
        scanf("%d",&arr[i]);
    }
    printf("\n");   

    //adding array elements
    printf("Performing summation \n\n");
    for (int i = 0; i < 10; i++)
    {
        sum+=arr[i];
    }

    //printing the sum of array
    printf("The summation of the array giver %d",sum);
    
}

#include <stdio.h>

//declaration of global array(initialised by 1)
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

    //Declaring two variables to store maximum and minimum of the array
    int max=arr[0],min=arr[0];

    //adding array elements
    printf("Performing summation \n\n");
    for (int i = 0; i < 10; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }

        if (arr[i]<min)
        {
            min=arr[i];
        }
    }

    //printing the maximum and minimum elemnts of array
    printf("Maximum element is %d\n",max);
    printf("Minimum element is %d\n",min);
    
}

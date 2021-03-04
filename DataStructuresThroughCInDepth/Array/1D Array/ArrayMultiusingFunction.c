#include <stdio.h>

//declaration of global array(initialised by 1)


int multi(int arr[]){
    int prod = 1;
    //adding array elements
    printf("Performing summation \n\n");
    for (int i = 0; i < 10; i++)
    {
        prod*=arr[i];
    }
    return prod;
}

int main()
{
    //Program starts here

    int sum=0;
    int arr[10];

    //Taking input of an array using a for loop
    for (int i = 0; i < 10; i++)
    {
        printf("Enter your element: ");
        scanf("%d",&arr[i]);
    }
    printf("\n");   

    //calling function for multiplication
    int product;
    product = multi(arr);

    
    //printing the sum of array
    printf("The Product of the array given %d",product);
    
}

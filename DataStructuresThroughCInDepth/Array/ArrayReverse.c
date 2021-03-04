#include <stdio.h>

//declaration of global array(initialised by 1)
int arr[100];

int main()
{
    //Program starts here
    int n;

    printf("Enter the size of array : ");
    scanf("%d",&n);

    //Taking input of an array using a for loop
    for (int i = 0; i < n; i++)
    {
        printf("Enter your element: ");
        scanf("%d",&arr[i]);
    }
    printf("\n");   

    int i,j, temp;

    //reversing the array
    printf("Performing summation \n\n");
    for (i = 0,j=n-1; i < j ; i++, j--)
    {
        temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }

    //printing the reversed array
    printf("Array after reversing \n");

    printf("Your Array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");   
    
    
}

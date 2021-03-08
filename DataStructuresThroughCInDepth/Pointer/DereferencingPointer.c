#include<stdio.h>

int main()
{
    int a = 80;
    float b =4.5;
    int *p1 = &a;
    float *p2 = &b;

    //printing different variables to understand 
    printf("Value of p1 = Address of a = %p\n",p1);
    
    return 0;
}

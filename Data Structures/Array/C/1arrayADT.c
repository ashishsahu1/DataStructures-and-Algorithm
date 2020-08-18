#include<stdio.h>

//custom array implementation using ADT
struct myArray
{
        int total_size;
        int used_size;
        int *ptr; //pointer tyo point first element
};

void createArray(struct myArray * a, int tSize, int uSize)
{
    a->total_size = tSize;
    a->used_size = uSize;
    a->ptr = (int*)malloc(tSize*sizeof(int));
}

void show(struct myArray *a){
    for (int i = 0; i < a->used_size; i++)
    {       
        printf("%d\n",(a->ptr)[i]);
    }   
}

void setVal(struct myArray *a){
    int n;
    for (int i = 0; i < a->used_size; i++)
    {
        printf("Enter the element you want to insert : ");
        scanf("%d",&n);       
        (a->ptr)[i]=n;
    }   
}

int main()
{
    //custom array implementation using ADT
    struct myArray marks;
    createArray(&marks, 10, 2);
    printf("We are running setval now \n");
    setVal(&marks);

    printf("We are running show now\n");
    show(&marks);
    return 0;
}
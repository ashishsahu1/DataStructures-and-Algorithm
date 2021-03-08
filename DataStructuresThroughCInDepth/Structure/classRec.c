#include<stdio.h>

//defining the structure of one student data
struct Student{
    char name[20];
    int roll;
    int marks;
};

int main(int argc, char const *argv[])
{
    //declaring the array of studetn for a class
    struct Student class[5];

    //taking input and storing in structure
    printf("Taking input about the student\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the details of student number %d : \n",i+1);
        printf("Name : ");
        scanf("%s",class[i].name);

        printf("Roll : ");
        scanf("%d",class[i].roll);

        printf("Marks : ");
        scanf("%d",class[i].marks);

    }

    //printing the student details 
    for (int i = 0; i < 5; i++)
    {
        printf("------------------------------\n");
        printf("Name : %s",class[i].name);
        printf("Roll : %d",class[i].roll);
        printf("Marks : %d",class[i].marks);
        printf("------------------------------\n\n");
    }
    

    return 0;
}

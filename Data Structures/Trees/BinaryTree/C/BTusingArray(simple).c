#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define SIZE 100

int tree[SIZE];
int c = 0;

int root(int key)
{
    if (tree[0] != '\0')
    {
        printf("Tree already have root\n");
    }
    else
    {
        tree[0] = key;
        c = c + 1;
    }
    return 0;
}

void set_left(int key, int parent)
{
    if (tree[parent] == '\0')
    {
        printf("No parent found\n");
    }
    else
    {
        tree[(parent * 2) + 1] = key;
        c = c + 1;
    }
}

void set_right(int key, int parent)
{
    if (tree[parent] == '\0')
    {
        printf("No parent found\n");
    }
    else
    {
        tree[(parent * 2) + 2] = key;
        c = c + 1;
    }
}

void out()
{
    for (int i = 0; i < c; i++)
    {
        printf("%d\t", tree[i]);
        
    }
}

void menu()
{
    printf("\n*********************************************************************\n");
    printf("1. Make root\n");
    printf("2. Insert left node\n");
    printf("3. Insert right node\n");
    printf("4. Print\n");
    printf("5. Exit\n");
    printf("\n*********************************************************************\n");
}

int main()
{
    int ch, ind;
    int value;
    while (1)
    {
        menu();
        printf("Enter your choice : \n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter the value : ");
            scanf("%d", &value);
            
            printf("\n");
            root(value);
            break;

        case 2:
            printf("Enter the value : ");
            scanf("%d", &value);
            
            printf("\n");
            printf("Enter the parent index : ");
            scanf("%d", &ind);
            set_left(value, ind);
            break;

        case 3:
            printf("Enter the value : \n");
            scanf("%d", &value);
            
            printf("Enter the parent index : ");
            scanf("%d", &ind);
            set_right(value, ind);
            break;

        case 4:
            out();
            break;

        case 5:
            exit(0);
            break;

        default:
            break;
        }
    }
}
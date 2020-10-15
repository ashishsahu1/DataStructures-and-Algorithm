#include<stdio.h>

void add(int intersect[],int x)
{
    
}


int main()
{
    int a1[100],a2[100],unio[100], intersect[100],n1,n2,c;

    printf("Enter the length of first array : ");
    scanf("%d",&n1);

    for (int i = 0; i < n1; i++)
    {
        printf("Number : ");
        scanf("%d",&a1[i]);
    }

    printf("Enter the length of Second array : ");
    scanf("%d",&n2);

    for (int i = 0; i < n2; i++)
    {
        printf("Number : ");
        scanf("%d",&a2[i]);
    }

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (a2[j]==a1[i])
            {
                c++;
            }  
        }
        if (c>0)
        {
            add(intersect,a1[i]);
        }
        
        
    }
    




    return 0;
}

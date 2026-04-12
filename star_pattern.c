#include <stdio.h>
#include <conio.h>
void main()
{
    int i,j;
    printf("\npattern 1:right angle triangle\n");
    

    for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++)
            printf("*");
        printf("\n");
    }
     printf("\npattern 2:inverted right triangle\n");

    for(i=5; i>=1; i--)
    {
        for(j=1; j<=i; j++)
            printf("*");
        printf("\n");
    }

     printf("\npattern 3:pyramid\n");
   
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5+i-1; j++)
        {
            if(j>=6-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\npattern 4:inverted pyramid\n");
   
    for(i=5; i>=1; i--)
    {
        for(j=1; j<=5+i-1; j++)
        {
            if(j>=6-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n patter5:\n");
     
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)
            if(j>=6-((i<=5)?i:10-i) && j<=4+((i<=5)?i:10-i))
                printf("*");
            else
                printf(" ");
        printf("\n");
    }

    
}

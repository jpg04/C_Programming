#include<stdio.h>
int main()
{
    /* char n;
    printf("Enter The Number You Want to Print a Pattern:");
    scanf("%c",&n); */

    int i,j, rows=1;
    /* printf("Enter The Number of Rows: ");
    scanf("%d",&rows); */

    for(i=rows; i<=5; i++)
    {
        for(j=rows; j<=5; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
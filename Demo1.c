#include<stdio.h>
int main()
{
    int i,j;
    char ch='A';
    for(i=1;i<=5;i++)
    {
        ch='A';
        for(j=1;j<=4;j++)
        {
            if(ch>='A'&&ch<='Z')
            {
                printf("%c\t",ch);
            }
            ch++;
        }
        printf("\n");
    }
}
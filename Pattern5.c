#include<stdio.h>
void Pattern5(int No)
{
    int icnt=0;
    for(icnt=1;icnt<=No;icnt++)
    {
        printf("*%d#\t",icnt);
    }
}
int main()  //entry point function
{
    int no=0;
    printf("Enter Number\n");
    scanf("%d",&no);
    Pattern5(no);
}
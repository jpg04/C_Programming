#include<stdio.h>
void Pattern1(int No)
{
    int icnt=0;
    for(icnt=1;icnt<=No;icnt++)
    {
        printf("%d\t",icnt);
    }
}
int main()  //entry point function
{
    int no=0;
    printf("Enter Number\n");
    scanf("%d",&no);
    Pattern1(no);
}
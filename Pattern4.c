#include<stdio.h>
void Pattern4(int No)
{
    int icnt=0;
    for(icnt=1; icnt<=No; icnt++)
    {
        if(icnt%2==0)
        {
            printf("*%d\t",icnt);
        }
        else
        {
            printf("#%d\t",icnt);
        }
    }
}
int main()
{
    int no=0;
    printf("Enter Number\n");
    scanf("%d,&",&no);
    Pattern4(no);
}



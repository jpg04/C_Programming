#include<stdio.h>
void Reverse(int No)
{
    int icnt = 0;
    for(icnt=No; icnt>=1; icnt--)
    {
        printf("%d",icnt);
    }
}
int main()
{
    int no = 0;
    printf("Enter Any Number:\n");
    scanf("%d",&no);
    Reverse(no);
}
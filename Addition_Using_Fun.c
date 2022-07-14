//Addition of two number using function and return the summession.
#include<stdio.h>
int Add(int No1,int No2)
{
    // int sum=0;
    // sum=No1+No2;
    return No1+No2;

}
int main()
{
    int ivalue1,ivalue2;
    printf("Enter First No\n");
    scanf("%d",&ivalue1);
    printf("Enter second No\n");
    scanf("%d",&ivalue2);
    int iRet=Add(ivalue1,ivalue2);
    printf("Addition is : %d\n",iRet);
}
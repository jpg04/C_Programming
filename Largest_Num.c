#include<stdio.h>
int Lar(int No1, int No2, int No3)
{
    if(No1>No2)
    {
        return No1;
    }
    else if(No2>No3)
    {
        return No2;
    }
    else
    {
        return No3;
    }
}
int main()
{
    int ivalue1,ivalue2,ivalue3;
    printf("Enter First No:\n");
    scanf("%d",&ivalue1);
    printf("Enter Second No:\n");
    scanf("%d",&ivalue2);
    printf("Enter Third No:\n");
    scanf("%d",&ivalue3);
    int iRet=Lar(ivalue1,ivalue2,ivalue3);
    printf("Largest Number is : %d\n",iRet);
    return 0;
}


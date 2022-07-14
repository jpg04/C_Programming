#include<stdio.h>

int DigitSum(int No)
{
    int iDigit=0,Sum=0;

    if(No<0)
    {
        No=-No;
    }

    while(No!=0)
    {
        iDigit=No%10;
        Sum=Sum+iDigit;
        No=No/10;
    }
    return Sum;

}
int main()
{
    int iValue=0,iRet=0;
    printf("Enter Number \n");
    scanf("%d",&iValue);
    iRet=DigitSum(iValue);
    printf("The Sumession of digit is : %d",iRet);
    return 0;
}
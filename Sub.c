#include<stdio.h>
int sub(int No1, int No2)
{
    return No1-No2;
}
int main()
{
    int iValue1, iValue2;
    printf("Enter The First Number:\n");
    scanf("%d",&iValue1);
    printf("Enter The Second Number:\n");
    scanf("%d",&iValue2);
    int iRet = sub(iValue1, iValue2);
    printf("Subtraction of Two number is: %d\n", iRet);
}


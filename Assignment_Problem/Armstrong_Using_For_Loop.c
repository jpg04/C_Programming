#include<stdio.h>
#include<stdbool.h>

bool CheckArmstrong(int iNo) //153
{
    int Temp=iNo;
    int iCnt=0;
    while(Temp != 0)
    {
        iCnt++;
        Temp=Temp/10;
    }
    Temp=iNo;
    int Rem=0;
    int iPower=1;
    int iSum=0;
    while(Temp != 0)
    {
       Rem=Temp%10;
       for(int i=1;i<=iCnt;i++)
       {
        
          iPower=iPower*Rem;
       }
       iSum=iSum+iPower;
       iPower=1;
       Temp=Temp/10;
    }

    if(iNo==iSum)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iNo=0;
    printf("Enter the number\n");
    scanf("%d",&iNo);

    bool bRet=CheckArmstrong(iNo);

    if(bRet==true)
    {
        printf("Number is Armstrong\n");
    }
    else
    {
        printf("Number is Not Armstrong\n");
    }


    
    return 0;
}
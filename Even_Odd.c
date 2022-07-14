// #include<stdio.h>
// void Even_Odd(int no)
// {
//     if(no%2==0)
//     {
//         printf("Given Number is Even");
//     }
//     else
//     {
//         printf("Given Number is Odd");
//     }
// }
// int main()
// {
//     int no = 0;
//     printf("Enter A Number:\n");
//     scanf("%d",&no);
//     Even_Odd(no);
//     return 0;
// }
#include<stdio.h>
#define BOOL int
#define TRUE 1
#define FALSE 0
BOOL EvenOdd(int No)
{
    if(No%2==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue=0;
    BOOL bRet=0;
    printf("Enter No\n");
    scanf("%d",&iValue);
    bRet=EvenOdd(iValue);
    if(bRet==TRUE)
    {
        printf("The Number is Even\n");
    }
    else
    {
        printf("The Number is Odd\n");
    }
    return 0;
}
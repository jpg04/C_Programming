#include<stdio.h>
int main()
{
    int n, flag=0;
    printf("Enter a Number:");
    scanf("%d",&n);

    if(n==0 || n==1)
    flag=1;
    for(int i=2; i<=n/2; ++i)
    {
        if (n%i==0)
        {
            flag = 1;
            break;
        }
    }
     if (flag==0)
        {
            printf("%d is a prime number",n);
        }
        else
        {
            printf("%d is not a Prime Number",n);
        }
}
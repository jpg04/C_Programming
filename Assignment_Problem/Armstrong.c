#include<stdio.h>
int main()
{
    int r,n,sum=0,temp;
    printf("Enter a Number:");
    scanf("%d",&n);

    temp = n;
    while (n>0)
    {
        r=n%10;
        sum += (r*r*r);
        n /= 10;
    }
    if (temp==sum)
    {
        printf("Number is Armstrong");
    }
    else
    {
        printf("Number is Not Armstrong");
    }
    
    
}
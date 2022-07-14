#include<stdio.h>  
#include<math.h> 
int main()
{
    int r,n,temp,sum=0,i=0;
    
    printf("Enter a Number:");
    scanf("%d",&n);

    temp=n;

    for(temp=n; temp!=0;++i)
    {
        temp =temp/10;
    }
    for(temp=n; temp!=0; temp/=10)
    {
        r=temp%10;
        sum+=pow(r,i);
    }
    if (n==sum)
    {
        printf("Entered Number is Armstrong");
    }
    else
    {
        printf("Entered Number is Not an Armstrong");
    }
    
}
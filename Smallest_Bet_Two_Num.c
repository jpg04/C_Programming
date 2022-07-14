#include<stdio.h>
#include<bits/stdc++.h>
int main()
{
    int num1, num2;
    printf("Enter a Num1:");
    scanf("%d",&num1);
    printf("Enter a Num2:");
    scanf("%d", &num2);

    if(num1<num2)
    {
        printf("%d is Smaller",num1);
    }
    else if (num2<num1)
    {
        printf("%d is smaller",num2);   
    }
    else
    {
        printf("%d and %d are Equal",num1, num2);
    }
}
#include<stdio.h>
int main()
{
    int age;
    printf("Enter Your Age:");
    scanf("%d",& age);

    if(age<13)
    {
        printf("Your are Child");
    }
    else if (age<18)
    {
        printf("You are an Teenager");
    }
    else
    {
        printf("You are Adult");
    }
}
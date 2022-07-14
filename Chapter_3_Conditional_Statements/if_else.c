#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age");
    scanf("%d", &age);
    if(age >=18)
    {
        printf("You are an adult");
    }
    else
    {
        printf("You are not adult");
    }
}
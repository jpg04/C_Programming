#include<stdio.h>
int main()
{
    int a, b, c, div;
    printf("Enter a 1st Number:");
    scanf("%d", &a);

    printf("Enter a 2n Number:");
    scanf("%d", &b);

    printf("Enter a 3rd Number:");
    scanf("%d" ,&c);

    div = (a + b + c)/3;
     printf("Avg of Given Number: %d", div);
}
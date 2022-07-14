#include<stdio.h>
int main()
{
    int age = 22;
    int oldAge = age;
    int newAge = oldAge + 2;
    printf("New age is: %d",newAge);

    int rupee = 1, dollar;
    dollar = 74;

    /* 
        order of declaration is important - wrong  Declaration  order 
        float pi = 3.14
        float = pi * rad * rad;
        float rad = 3;

     */

    // Valid Declaration
    int age1, age2, age3;
    age1 = age2 = age3 = 22;

    // Invalid Declaration
    // int a1 = a2 =a3 = 33;

}

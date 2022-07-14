#include<stdio.h>
int main()
{
    int age;
    printf("Enter Your Age:");
    scanf("%d", &age);

    age < 18 ? printf("You are a Child \n") : printf("You are Adult \n");

    // int number =7, //luckyNumber = 8;
    int number;
    printf("Enter a Number:");
    scanf("%d", &number); 

    // number ==  luckyNumber ? printf("Number is Lucky") : printf("Number is unlucky"); // Predefined Input
    number <  7 ? printf("Number is Lucky") : printf("Number is unlucky");  // Take input from user
}
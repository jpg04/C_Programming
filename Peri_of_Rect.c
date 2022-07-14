#include<stdio.h>
int main()
{
    float l, w, p;
    printf("Enter Length of Rectangle:");
    scanf("%f",&l);

    printf("Enter Breatdh of Rectangle:");
    scanf("%f",&w);

    p = 2 *(l+w);
    printf("Perimeter of Rectangle: %f \n",p);
}
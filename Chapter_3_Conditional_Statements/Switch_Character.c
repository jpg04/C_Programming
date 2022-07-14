#include<stdio.h>
int main()
{
    char D;
    printf("Enter a Day Between(Mon-Sun):");
    scanf("%c",&D);

    switch (D)
    {
    case 'm' : printf("Monday \n");
        break;
    case 't' : printf("Tuesday \n");
        break;
    case 'w' : printf("Wednesday \n ");
        break;
    case 'T' : printf("Thursday \n");
        break;
    case 'f' : printf("Friday \n");
        break;
    case 's' : printf("Saturday \n");
        break;
    case 'S' : printf("Sunday \n");
        break;    
    default: printf("Entered Day is Not a Valid");
    }
}
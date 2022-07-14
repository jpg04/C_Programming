#include <stdio.h>

int main()
{
    int i=0;
    printf("Enter Number:");
    scanf("%d",&i);
    if(i%9==0)
    {
        printf("FOO\n");
    }
    else if(i%13==0)
    {
        printf("Bar\n");
    }
    else if(i%9==0&&i%13==0)
    {
        printf("FOO Bar\n");
    }

    return 0;
}
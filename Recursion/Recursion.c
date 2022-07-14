#include<stdio.h>

void HWre(int count);


int main()
{
    HWre(10);
    return 0;
}
void HWre(int count)
{
    if(count==0)
    {
       return;
    }
    
    printf("Hello World!\n");
    HWre(count-1);

    
}

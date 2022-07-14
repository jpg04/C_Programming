#include<stdio.h>

void Call(int k)    //50  
{
    k=k+150;
    printf("Formal Parameter Value %d\n",k);    //150
    printf("%d\n",&k);

}

int main()
{
    int n = 50;
    printf("Before Passing the Value:%d\n",n);  //50
    Call(n);        //calling function
    printf("After the passing the parameter%d\n",n);    //50
    printf("%d\n",&n);

}
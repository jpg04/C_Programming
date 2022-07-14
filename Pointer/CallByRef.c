#include<stdio.h>
void Fun(int *k)    //1000
{
    *k=*k+100;
    printf("value of k is %d\n",k);   
    printf("print p inside fun %d\n",*k);   //200
}
int main()
{
    int p=100;              //p 1000 
    printf("before passing %d\n",p);    //100
    Fun(&p);    //calling function  //1000
    printf("address of p %d\n",&p);  //1000
    printf("after passing %d\n",p);    //200
    return 0;
}
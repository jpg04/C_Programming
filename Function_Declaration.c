#include<stdio.h>   // include heder file
void Add(int No1,int No2);  //declaration of function
int main()      //entry point function
{
    int a=0,b=0;    //create two intager variable
    printf("Enter Two Number\n");   //print statement for user conveniance
    scanf("%d %d",&a,&b);   // accept user value 
    Add(a,b);   //calling function
    return 0;   // indicate success
}
void Add(int No1,int No2)   //defination of function mhanje actual function
{
    int Sum=No1+No2;    //calulate two number inside Sum variable
    printf("%d\n",Sum);     //print the summesion on screen
}
//calculate factorial of the number
#include<stdio.h>
int main()
{
    int i,f=1,num;   //declare the variables,and f to store factorial

    printf("Input the number:");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    f=f*i;
    printf("The Factorial of %d is:%d\n",num,f);
    return 0; 
}

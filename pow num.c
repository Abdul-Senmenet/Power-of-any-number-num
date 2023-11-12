#include<stdio.h>
void main()
{
    printf("Program to generate power of a number\n");
    int num,gpow,i;
    scanf("%d %d",&num,&gpow);
    printf("%d^%d\n",num,gpow);
    int pow=num;
    for(i=1;i<gpow;i++)
    {
        pow=pow*num;
    }
    printf("%d",pow);
}
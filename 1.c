/*1. Write a program to calculate sum of first N natural numbers*/
#include<stdio.h>
int main()
{
    int i,sum=0 ,n;
    printf("inter a number");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}
//6. Write a program to calculate factorial of a number
#include<stdio.h>
int main()
{
    int i,sum=1 ,n;
    printf("inter a number");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        sum=sum*i;
    }
    printf("%d",sum);
    return 0;
}
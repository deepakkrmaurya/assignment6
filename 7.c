/*7. Write a program to count digits in a given number*/
#include<stdio.h>
int main()
{
    int n,sum=0,a;
    printf("inter a number");
    scanf("%d",&n);
    while(n!=0)
    {   a=n%10;
        sum=sum+a;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}
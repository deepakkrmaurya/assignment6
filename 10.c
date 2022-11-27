/*10. Write a program to reverse a given number*/
#include<stdio.h>
int main()
{
    int a,n;
    printf("inter a number");
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%10;
        printf("%d",a);
        n=n/10;
    }
    
    return 0;
}
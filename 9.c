/*9. Write a program to calculate LCM of two numbers*/
#include<stdio.h>
int main()
{
    int x,y,i;
    printf("input two numbber");
    scanf("%d%d",&x,&y);
    for(i=2;i<x*y;i++)
    if((i%x==0)&&(i%y==0))
    break;
    printf("LCM is %d",i);
}
#include<stdio.h>
void main()
{
    printf("enter the angles of a triangle=");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int sum=a+b+c;
    if (sum==180)
    {
        printf("triangle is valid");
    }
    else
    printf("triangle is not valid");
    
}
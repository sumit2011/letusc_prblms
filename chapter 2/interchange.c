#include<stdio.h>
void main()
{
    int C,D;
    printf("enter the value of c and d=");
    scanf("%d %d",&C,&D);
    int a;
    a=C;
    C=D;
    D=a;
    printf("c=%d  d=%d",C,D);
}
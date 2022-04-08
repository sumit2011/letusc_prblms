#include<stdio.h>
void main()
{
    int a;
    printf("enter any number=");
    scanf("%d",&a);
    int i=1;
    while (i<=20)
    {
        printf("%3d*%3d=%3d\n",a,i,a*i);
        i++;
    }
}
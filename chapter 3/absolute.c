#include<stdio.h>
void main()
{
    printf("enter any number=");
    float num;
    scanf("%f",&num);
    if (num>=0)
    {
        printf("absolute value=%f",num);
    }
    else
    {
    float a;
    a=num*(-1);
    printf("absolute value is=%f",a);
    }
}

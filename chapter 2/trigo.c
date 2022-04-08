#include<stdio.h>
#include<math.h>
void main()
{
    int x;
    printf("enter the value of x=");
    scanf("%d",&x);
    float y=x*(3.14/180);
    printf("\nsin%d=%f",x,sin(y));
    printf("\ncos%d=%f",x,cos(y));
    printf("\ntan%d=%f",x,tan(y));
    printf("\ncosec%d=%f",x,1/sin(y));
    printf("\nsec%d=%f",x,1/cos(y));
    printf("\ncot%d=%f",x,1/tan(y));
}
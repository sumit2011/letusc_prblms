#include<stdio.h>
#include<math.h>
void main()
{
    float x,y;
    printf("enter x and y coordinates= ");
    scanf("%f %f",&x,&y);
    printf("%f %f",x,y);
    float r;
    float phy;
    r=sqrt(x*x+y*y);
    float p=y/x;
    phy=atan(p) *180/3.1415;
    printf("coordinates in polar form is= (%f,%f)",r,phy);
}
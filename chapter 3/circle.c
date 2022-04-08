#include<stdio.h>
#include<math.h>
void main()
{
    double x=5,y=6,r=3;
    double a,b;
    printf("enter the value of x and y=");
    scanf("%lf %lf",&a,&b);
    double d;
    double p=pow((x-a),2);
    double q=pow((y-b),2);
    d=sqrt(p+q);
    if (d>r)
    {
        printf("point is outside the circle");
    }
    else
    printf("point is inside the circle");
}
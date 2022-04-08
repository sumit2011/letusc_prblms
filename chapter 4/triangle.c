#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    printf("enter the sides of a triangle=");
    scanf("%d %d %d",&a,&b,&c);
    if (a==b && b==c)
    {
        printf("triangle is an equilateral");
    }
    else if ((a*a+b*b)==c*c || (a*a+c*c)==b*b || (b*b+c*c)==a*a)
    {
        printf("triangle is right angled");
    }
    else if (a==b && b!=c || b==c && c!=a || a==c && c!=b)
    {
        printf("triangle is isosceles");
    }
    else
    printf("triangle is scalene");
}
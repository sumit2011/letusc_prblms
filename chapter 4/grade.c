#include<stdio.h>
#include<math.h>
void main()
{
    float hd,cc,ts;
    printf("enter the value of hardness,carbon content,tensile strength respectively=");
    scanf("%f %f %f",&hd,&cc,&ts);
    float a,b,c;
    a=hd>50;
    b=cc<0.7;
    c=ts>5600;
    if (a && b && c)
    {
        printf("grade is 10");
    }
    else if (a && b)
    {
        printf("grade is 9");
    }
    else if (b && c)
    {
        printf("grade is 8");
    }
    else if (a && c)
    {
        printf("grade is 7");
    }
    else if (a || b || c)
    {
        printf("grade is 6");
    }
    else
    printf("grade is 5");
}